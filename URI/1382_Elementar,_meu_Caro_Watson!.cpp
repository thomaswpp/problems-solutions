#include <iostream>

using namespace std;

int v[10005];

int swap( int a, int b )
{
	int aux = v[a];
	v[a] = v[b];
	v[b] = aux;
}

int select_sort( int n )
{
	int count_swap = 0, k;
	for(int i = 0; i < n; i++)
	{
		
		k = v[i] - 1;
		if( k != i )
		{
			swap( i, k );
			if( v[i] != ( i + 1 )  )
				--i;

			count_swap++;
			
		}

	}

	return count_swap;
}


int main()
{
	int t, n;

	cin >> t;

	while(t--)
	{
		cin >> n;
		for( int i = 0; i < n; i++ )
			cin >> v[i];

		cout << select_sort( n ) << endl;

	}


	return 0;
}