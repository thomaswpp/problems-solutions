#include <iostream>
#include <stack>
#include <queue>
#include <climits>
using namespace std;

typedef struct 
{
	int entrada;
	int saida;

} Carros;

queue <Carros> qcarros;
//min heap int
priority_queue <int, vector<int>, greater<int> > min_heap_saidas;
Carros aux;
stack<Carros> pestacionamento;
int N = 1, K = 1, C, S, ent;

void vagas_carros()
{
		
		pestacionamento.push(qcarros.front());
		qcarros.pop();

		while(!pestacionamento.empty() || !qcarros.empty())
		{
			
			if(!qcarros.empty())
				ent = qcarros.front().entrada;
			else
				ent = INT_MAX;

			if( ent < min_heap_saidas.top())
			{				
				
				if (pestacionamento.size() == K)
					break;

				pestacionamento.push(qcarros.front());
				qcarros.pop();
			}
			else if( ent == min_heap_saidas.top())
			{				

				aux = pestacionamento.top();
				S = min_heap_saidas.top();
				
				if(aux.saida != S)
					break;

				pestacionamento.pop();
				min_heap_saidas.pop();

				pestacionamento.push(qcarros.front());
				qcarros.pop();
			}
			else 
			{
				aux = pestacionamento.top();
				S = min_heap_saidas.top();
				
				if(aux.saida != S)
					break;

				pestacionamento.pop();
				min_heap_saidas.pop();	
			}
			

		}

		if(!pestacionamento.empty())
			cout << "Nao" << endl;
		else
			cout << "Sim" << endl;
}

int main(void)
{



	while (N > 0 && K > 0)
	{
		cin >> N >> K;

		//Read In
		for(int i=0; i < N; i++)
		{
			cin >> C >> S;
	
			aux.entrada = C;
			aux.saida = S;
			qcarros.push(aux);
			min_heap_saidas.push(S);
			//cout << C << " " << S << endl;
			
		}

		if(N > 0)
			vagas_carros();

		//Clear
		qcarros = queue <Carros>();
		min_heap_saidas = priority_queue <int, vector<int>, greater<int> >();
		pestacionamento = stack <Carros>();

	}

}