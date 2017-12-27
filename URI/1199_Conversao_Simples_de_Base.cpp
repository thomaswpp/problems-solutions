#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

	char x[50];
	unsigned long long d;

	while( scanf("%s", x) && x[0] != '-' )
	{

		//hex to dec
		if(x[1] == 'x')
		{
			d = strtoll( x, 0, 16 );
			printf("%lld\n", d);

		} else //dec to hex
		{
			d = atoi( x );
			printf("0x%llX\n", d);

		}


	}
	return 0;
}