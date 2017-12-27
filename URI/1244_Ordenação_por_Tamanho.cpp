#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
	string s;
	int i;
} order;

bool acompare(order a, order b)
{
	if(a.s.size() > b.s.size())
		return true;
	else if (b.s.size() > a.s.size())
		return false;

	if(a.i >  b.i)
		return false;

	return true;

}

vector<order> vs;
int main()
{

	int n, i, tam;
	char arr[50];
	order aux;

	cin >> n;

	while(n--)
	{

		char temp;
		i = 0;
		while(scanf("%s%c", arr, &temp)){
			aux.s = arr;
			aux.i = i;
			vs.push_back(aux);
			i++;
		    if(temp=='\n'){
		        break;
		    }
		}


		sort(vs.begin(), vs.end(), acompare);
		tam = vs.size();
		for(int i=0; i < tam; i++)
		{
			cout << vs[i].s;
			if(i < (tam-1))
				cout << " ";
		}

		cout << endl;
		
		vs = vector<order>();

	}

}