#include <iostream>

using namespace std;

int josephus(int n, int k)
{
	if(n == 1) return 1;

	return (josephus(n-1, k) + k-1) % n + 1;
}


int main(void)
{
	int NC, n, k, caso = 1;
	cin >> NC;

	while( NC-- )
	{	
		cin >> n >> k;

		cout << "Case " << caso << ": " <<  josephus(n, k) << endl;
		caso++;
	}
	return 0;
}