#include <iostream>
#include <vector>

using namespace std;

vector<int > primos;

void calc_primo(int n)
{
	int i = 0, k = 0, test_primo = 2; 
		
	while(i < n)
	{
		k = test_primo/2;
		
		while((test_primo % k) != 0 && k > 1)
			k--;

		if(k == 1)
		{
			primos.push_back(test_primo);
			i++;
		}
		test_primo++;
	}
}


/*
Original
int josephus(int n, int k)
{
	if(n == 1) return 1;

	return (josephus(n-1, k) + k-1) % n + 1;
}*/

//Adaptacao para o problema do primo josephus
int josephus_primo(int n, int k)
{
	if(n == 1) return 1;

	return (josephus_primo(n-1, ++k) + primos[k-1]-1) % n + 1;
}



int main(void)
{
	int n;
	calc_primo(3501);

	do
	{
		cin >> n;
		if(n > 0) 
			cout << josephus_primo(n, 0) << endl;

	} while(n > 0);

	
	return 0;
}