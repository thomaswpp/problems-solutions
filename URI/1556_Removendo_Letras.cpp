#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int G[1005][26];
char words[1005];
int tamanho;

void dfs_letters( int v )
{

	for( int i = 0; i < 26; i++ )
	{
		if( G[v][i] )
		{
			words[ tamanho++ ] = 'a' + i;
			words[ tamanho ] = '\0';
			printf( "%s\n", words );
			dfs_letters( G[v][i] );
			tamanho--;
		}
	}

}

int main()
{
	int aresta[26], tam;
	char in[1005];

	while( scanf("%s", in+1) != EOF )
	{
		in[0] = 'X';
		tam = strlen( in );
		memset(aresta, 0, sizeof aresta);

		for( int i = tam-1; i >= 0; i-- )
		{
			for( int j = 0; j < 26; j++ )
				G[i][j] = aresta[j];

			aresta[ in[i] - 'a' ] = i;			
		}

		tamanho = 0;
		dfs_letters( 0 );
		printf("\n");

	}
	return 0;
}