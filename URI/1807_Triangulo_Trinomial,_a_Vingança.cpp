#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int expmod(int a, int b, int n) {
  if(b == 0)
    return 1;
  else 
  {
    long long res = expmod(a, b/2, n);
    res = (res*res) % n;
    if(b%2 == 1)
      res = (res*a) % n;
    return (int) res;
  }
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r, m;

	cin >> r;
		
	m = (pow(2, 31) - 1);
	cout << expmod(3, r, m) % m << endl;

	return 0;
}