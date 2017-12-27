#include <iostream>
#include <stack>
#include <queue>
#include <stdio.h>

using namespace std;
queue <int> fila;
stack <int> pilha;
priority_queue <int> pq;
int n, modo, x, is_pilha, is_fila, is_pq, qual_modo;

void imprime_estrtura()
{
	if(qual_modo == 0)
		cout << "impossible" << endl;
	else if(qual_modo > 1)
		cout << "not sure" << endl;
	else if(is_fila)
		cout << "queue" << endl;
	else if(is_pilha)
		cout << "stack" << endl;
	else if(is_pq)
		cout << "priority queue" << endl;
}

int main(void)
{
	
	
	while(scanf("%d", &n) != EOF)
	{
		is_pilha = is_fila = is_pq = 1;
		qual_modo = 3;

		for(int i=0; i < n; i++) 
		{
			cin >> modo >> x;

			if(modo == 1)
			{
				fila.push(x);
				pilha.push(x);
				pq.push(x);
			} 
			else
			{
				if(!fila.empty() && is_fila)
				{
					if(fila.front() != x)
					{
						is_fila = 0;
						qual_modo--;
					}
					fila.pop();
				}
				
				if(!pilha.empty() && is_pilha)
				{
					if(pilha.top() != x)
					{
						is_pilha = 0;
						qual_modo--;
					}
					pilha.pop();
				}

				if(!pq.empty() && is_pq)
				{
					if(pq.top() != x)
					{
						is_pq = 0;
						qual_modo--;
					}
					pq.pop();
				}

			}
		}
		imprime_estrtura();
		fila = queue <int>();
		pilha = stack <int>();
		pq = priority_queue <int>();

	}
	return 0;
}