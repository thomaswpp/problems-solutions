#include <iostream>

using namespace std;

int main(void)
{

	long long int n, l, i;

	while(cin >> n)
	{
		l = 1; i=1;
		
		while(l != 0)
		{
			l = ((l * 10) + 1) % n;
			i++;
		}

		cout << i << endl;
	}

	return 0;
}