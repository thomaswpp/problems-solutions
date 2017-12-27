#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int bubble_sort(vector<int > vagoes, int l)
{
	int trocas = 0;
	int aux;
	for(int i=l-1; i > 0; i--)
	{
		for(int k=0; k < i; k++)
		{
			if(vagoes[k] > vagoes[k+1])
			{
				int aux = vagoes[k];
				vagoes[k] = vagoes[k+1];
				vagoes[k+1] = aux;
				trocas++;
			}

		}
	}
	return trocas;
}


int main()
{

	int n, l, v, trocas;


	cin >> n;

	for(int i=0; i < n; i++)
	{
		cin >> l;
		vector<int > vagoes;
		for(int i=0; i < l; i++)
		{
			cin >> v;
			vagoes.push_back(v);
		}
		trocas = bubble_sort(vagoes, l);
		cout << "Optimal train swapping takes " << trocas << " swaps." << endl;	
	}
	return 0;
}