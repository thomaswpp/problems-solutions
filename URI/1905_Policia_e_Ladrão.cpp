#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int track[5][5];
bool pegou;

void candidate( int directions[], int n, int m )
{

	memset( directions, -1, sizeof( *directions )*8 );

	if( n < 4)
	{
		if(!track[n+1][m]) //down
		{ 
			directions[2] = n + 1;
			directions[3] = m;
		}
	}

	if( m < 4)
	{
		if(!track[n][m+1]) //right
		{ 
			directions[6] = n;
			directions[7] = m + 1;
		}
	}

	if( m > 0)
	{
		if(!track[n][m-1]) //left
		{ 
			directions[4] = n;
			directions[5] = m - 1;
		}
	}

	if( n > 0)
	{
		if(!track[n-1][m]) //up
		{ 
			directions[0] = n - 1;
			directions[1] = m;
		}
	}

}

void blacktrack(int n, int m)
{

	int directions[8], cn, cm; //l-left, r-right, u-up, d-down

	if( n == 4 && m == 4 )
	{
		pegou = true;

	} else 
	{
		candidate( directions, n, m );
		for( int i = 0; i < 8; i+=2 )
		{
			if( directions[i] != -1 && !pegou)
			{
				cn = directions[i];
				cm = directions[i+1];

				track[cn][cm] = 1;
				blacktrack(cn, cm);
				track[cn][cm] = 0;
			}
			
		}

	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	while( t-- )
	{
		for( int i = 0; i < 5; i++ )
			for( int j = 0; j < 5; j++ )
				cin >> track[i][j];

		pegou = false;
		blacktrack(0, 0);

		if( pegou )
			cout << "COPS" << "\n";
		else
			cout << "ROBBERS" << "\n";

	}

	return 0;
}