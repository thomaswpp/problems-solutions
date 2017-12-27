#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, v[100005], aux, cont;

	while( cin >> n && n )
	{

		cont = 0;
		for( int i = 1; i <= n; i++ )
			cin >> v[i];


		//a ideia consiste em alterar o elemento de acordo com sua posicao no vetor
		for( int i = 1; i <= n; i++ )
		{
			if( v[i] != i )
			{
				aux = v[ v[i] ];
				v[ v[i] ] = v[i];
				v[i] = aux;
				cont++;
				i--; //verificar do inicio
			}

		}

		if( cont % 2 )
			cout << "Marcelo\n";
		else
			cout << "Carlos\n";

	}

	return 0;
}