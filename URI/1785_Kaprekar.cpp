#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
#include <string>


using namespace std;


int krapekar(string x) {

   int cnt = 0, maior, menor, n = stoi(x);


   while (n != 6174) {

   		sort( x.begin(), x.end() );

		maior = menor = 0;

		//calc maior e menor número
		for( int i = 0; i < 4; i++ )
		{
			maior += ( x[3-i] - '0') * pow(10,3-i);
			menor += ( x[i] - '0') * pow(10,3-i);
		}

		n = maior - menor;

		if( n == 0 )
		{
			cnt = -1;
			break;
		}

		x = to_string(n);
		cnt = cnt + 1;

   }

   return cnt;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, y, caso = 0;
	string x;

	cin >> t;

	while(t--)
	{
		cin >> x;

		//complete with zeros
        while( x.size() < 4 ) x+= '0' ;

		caso++;
		y = krapekar(x);
		cout <<"Caso #" << caso << ": " << y << "\n";

	}

	return 0;
}