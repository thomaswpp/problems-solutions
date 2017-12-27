#include <iostream>

using namespace std;


int main()
{

	int n, t, cont, tiros[50];
	char pulos[50];

	cin >> n;
	while(n--)
	{
		cin >> t;

		cont = 0;

		for(int i = 0; i < t; i++)
			cin >> tiros[i];

		scanf("%s", pulos);
		
		for(int i = 0; i < t; i++)
		{

			if( tiros[i] > 2 )
			{
				if( pulos[i] == 'J' ) 
					cont++;
			}
			else if (pulos[i] == 'S')
				cont++;	

		}

		cout << cont << endl;

	}

	return 0;
}