#include <iostream>

using namespace std;

bool eh_perfeito(int x)
{
	int soma = 0;
	for(int i=1; i < x; i++)
		if(x % i == 0)
			soma += i;

	return soma == x;
}

int main(void)
{

	int n, x;

	cin >> n;

	while(n--)
	{
		cin >> x;
		if(eh_perfeito(x))
			cout << x << " eh perfeito" << endl;
		else
			cout << x << " nao eh perfeito" << endl;
	}
	return 0;
}