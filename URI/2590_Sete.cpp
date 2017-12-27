#include <bits/stdc++.h>

using namespace std;

//numero 7^n tem um padrão no digito final, formula N % 4 == 0  => 1 e assim vai
//http://blog.teamleadnet.com/2012/07/faster-division-and-modulo-operation.html
//Sendo "m" uma potência de 2 qualquer, pode-se afirmar o seguinte: x % m = x & (m-1).

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;
	while( t-- )
	{	
		cin >> n;
		if( ( n & (3) ) == 0 )
			cout << "1\n";
		else if( ( n & (3) ) == 1 )
			cout << "7\n";
		else if( ( n & (3) ) == 2 )
			cout << "9\n";
		else
			cout << "3\n";
	}

	return 0;
}