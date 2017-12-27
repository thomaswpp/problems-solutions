#include <bits/stdc++.h>

using namespace std;

int fat[5] = {1,2,6,24,120};

int ACM_to_DEC( int n )
{

	int dec = 0, digito;
	for( int i = 0; n != 0; i++ )
	{
		digito = n % 10;
		dec += digito * fat[i];
		n /= 10;
	}

	return dec;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;

	while(cin >> n && n)
	{
		cout << ACM_to_DEC(n) << "\n";
	}

	return 0;
}
