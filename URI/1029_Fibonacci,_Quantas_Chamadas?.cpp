#include <iostream>

using namespace std;

int nchamadas;


int fibonacci( int n )
{
	if( n == 0 ) return 0;
	if( n == 1 ) return 1;

	nchamadas += 1;

	return fibonacci( n-1 ) + fibonacci( n-2 );
}

int main()
{

	int n, f;

	cin >> n;

	while( n-- )
	{
		nchamadas = 0;

		cin >> f;

		cout << "fib(" << f << ") = " << 2*nchamadas << " calls = " << fibonacci( f ) << endl; 

	}

	return 0;

}