#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int l, c, r1, r2, x2, y2;
	float dist;
	while( cin >> l >> c >> r1 >> r2 && l )
	{
		if( (l >= 2*r1) && (l >= 2*r2) && (c >= 2*r1) && (c >= 2*r2) )
		{
			x2 = l - r2;
			y2 = c - r2;
			
			dist = sqrt( pow( r1 - x2, 2 ) + pow( r1 - y2, 2 ) );

			if( dist >= ( r1+r2 ) )
				cout << "S\n";
			else
				cout << "N\n";
		}else
			cout << "N\n";

	}




	return 0;
}