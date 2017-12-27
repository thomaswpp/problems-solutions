#include <iostream>
#include <math.h>

using namespace std;


int main()
{

	int A, B, C, H, L, Hipotenusa;

	cin >> A >> B >> C;
	cin >> H >> L;

	if( ( B <= H && A <= L ) || ( B <= L && A <= H ) )
		cout << "S";
	else if( ( C <= H && A <= L ) || ( C <= L && A <= H ) )
		cout << "S";
	else if( ( C <= H && B <= L ) || ( C <= L && B <= H ) )
		cout << "S";
	else
		cout << "N";

	cout << endl;

	return 0;
}