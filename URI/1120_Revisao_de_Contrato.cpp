#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	string s, scpy;
	char d;
	int flag;

	while(cin >> d >> s && d != '0')
	{
		scpy = ""; flag = 0;
		for( int i = 0; i < s.size(); i++ )
		{
			if( s[i] != d )
			{
				//não amazenar zero a esquerda
				if(s[i] != '0')
					flag = 1;

				if(flag == 1)
					scpy += s[i];
			}
		}

		if(scpy != "" &&  atoi( scpy.c_str() ) != 0)
			cout << scpy << '\n';
		else 
		{
			printf("0\n");
		}
	}

	return 0;
}