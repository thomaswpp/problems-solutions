#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();

	int a, b, c, min;

	cin >> a >> b >> c;

	a /= 2; b /= 3; c /= 5;

	min = a;

	if( b < min)
		min = b;
	if( c < min)
		min = c;

	cout << min << endl;

	return 0;
}