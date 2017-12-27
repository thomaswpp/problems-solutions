#include <stdio.h>


using namespace std;

int start[24], finish[24];
int n;

void overtaking( int i, int j )
{
	int aux;
	for( int k = j; k > i; k-- )
	{
		aux = start[k];
		start[k] = start[k-1];
		start[k-1] = aux;
	}
}

int count_overtaking()
{
	int q = 0, j, i;

	for( i = 0; i < n; i++ )
	{
		
		for( j = 0; j < n; j++ )
		{
			if( start[j] == finish[i] )
				break;
		}

		if( j > i )
		{
			q += ( j - i );
			overtaking( i, j );
		}

	}

	return q;
}

int main(void)
{

	int aux;

	while (scanf("%d", &n) != EOF) 
	{

		for(int i = 0; i < n; i++)
			scanf("%d", &start[i]);

		for(int i = 0; i < n; i++)
			scanf("%d", &finish[i]);


		printf("%d\n", count_overtaking() );

	}
	
	return 0;
}