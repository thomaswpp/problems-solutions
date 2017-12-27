#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	int n, k, v[1005], p, total;

	while(cin >> n >> k && n && k)
	{
		memset(&v, 0, 1005);
		total = 0;

		for(int i=0; i < n; i++)
		{
			cin >> p;
			v[p]++;

			if(v[p] == k)
				total++;
		}

		cout << total << endl;

	}

	return 0;
}