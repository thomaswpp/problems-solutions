#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int acompare(int a, int b)
{
	if(a < b)
		return false;

	return true;
}

int main()
{
	int n, num;
	vector<int> par, impar;

	cin >> n;

	while( n-- )
	{
		cin >> num;

		if( num % 2 == 0)
			par.push_back(num);
		else
			impar.push_back(num);
	}

	sort(par.begin(), par.end());
	sort(impar.begin(), impar.end(), acompare);

	for(int i=0; i < par.size(); i++)
		cout << par[i] << endl;

	for(int i=0; i < impar.size(); i++)
		cout << impar[i] << endl;

	return 0;
}