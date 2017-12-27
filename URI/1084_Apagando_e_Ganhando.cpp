#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;


typedef struct
{
	int numero;
	int order;

} ordem ;


ordem digitos[100000];


void get_digitos(int n, int num)
{
	int d;
	ordem aux;
	for(int i=n-1; i >= 0; i--)
	{
		d = num % 10;
		
		aux.numero = d;
		aux.order = i;
		digitos[i] = aux;

		num /= 10;
	}
}


void print(int qd, int n)
{
	for(int i=qd; i < n; i++)
	{
		cout << digitos[i].numero;
	}
	cout << endl;
}


int main(void)
{
	int n, d, top;
	string num;
	char pilha[100005];
	
	while(cin >> n && cin >> d && n && d)
	{
		top = -1;
		cin >> num;
		for(int i=0; i < n; i++)
		{
			char current = num[i];

			while(d > 0 && (top != (-1)) && pilha[top] < current)
			{
				--top; --d;
			}

			pilha[++top] = current;

		}
	
		top -= d;
		pilha[top+1] = 0;
		printf("%s\n", pilha);

	}


	return 0;
}