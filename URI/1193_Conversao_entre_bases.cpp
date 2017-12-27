#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>

using namespace std;

string dec_to_bin(unsigned long long dec){

	if (dec==0) return "0";
	if (dec==1) return "1";

	if (dec%2 == 0)
	    return dec_to_bin(dec/2) + "0";
	else
	    return dec_to_bin(dec/2) + "1";
}


int main(void)
{
	int n, caso;
	string formato, b, x;
	unsigned long long d;

	cin >> n;

	caso = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> formato;


		printf("Case %d:\n", ++caso);

		if(formato == "bin")
		{
			d = bitset<32>(x).to_ulong();

			printf("%lld dec\n", d);
			printf("%llx hex", d);

		}
		else if(formato == "dec")
		{
			d = atoi(x.c_str());
		
			printf("%llx hex\n", d);

			if(d >= 0)
			{				
				b = dec_to_bin(d);
				cout << b << " bin";
			}
			else
				printf(" bin");

		}
		else
		{
			
			d = strtoll(x.c_str(), 0, 16);
			
			cout << d << " dec" << endl;

			if(d >= 0)
			{
				b = dec_to_bin(d);
				cout << b << " bin";
			}
			else
				printf(" bin");
		}

		printf("\n\n");

	}
}