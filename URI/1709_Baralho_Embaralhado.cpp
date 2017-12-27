#include <iostream>

using namespace std;

 
int total;

//método intercala do mergesort adaptado 
void embaralhar(int i, int n)
{

	if(i == 1 && total)
		return;

	int q = n/2;

	total++;

	return i <= q ? embaralhar(2*i, n) : embaralhar(i - (n - i + 1), n);

}

int main()
{

	int n;

	cin >> n;

	total = 0;
	embaralhar(1, n);
	cout << total << endl;

	return 0;
}