#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int d, vf, vg;
	float tf, tg, s;

	while(cin >> d && d != EOF)
	{
		cin >> vf >> vg;

		s = sqrt((d*d) + 144);

		tf = 12.0/vf;
		tg = s/vg;

		if(tg <= tf)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
	return 0;
}