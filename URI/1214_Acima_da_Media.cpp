#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int c, qtd;
	float media, n, soma, v[1005];

	cin >> c;

	while(c--)
	{
		cin >> n;

		qtd = soma = 0.0;
		for( int i = 0; i < n; i++ )
		{
			cin >> v[i];
			soma += v[i];
		}
		
		media = soma / n;

		for( int i = 0; i < n; i++ )
		{
			if( v[i] > media )
				qtd++;
		}

		printf("%.3f%%\n", ((qtd*100)/n) );

	}

	return 0;
}

