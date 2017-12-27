#include <algorithm>
#include <stdio.h>

using namespace std;


inline void fastRead_int(int &x)
{
	register int c = getchar();
	x = 0;
	int neg = 0;

	for(; ((c < 48 || c > 57) && c != '-'); c = getchar());

	if(c == '-')
	{
		neg = 1;
		c = getchar();
	}

	for(; c > 47 && c < 58 ; c = getchar())
	{
		x = (x << 1) + (x << 3) + c - 48;
	}

	if(neg)
		x = -x;
}


int main() {

	int NC, N;

	scanf("%d",&NC);
	for (int i=0; i < NC; i++) {

		scanf("%d",&N);

		int v[N];

		//Lê alturas do vetor
		for(int j=0; j < N; j++)
			fastRead_int(v[j]);

		sort(v, v+N);
		int k;
		for(k=0;k<N-1;k++)
			printf("%d ", v[k]);
		printf("%d\n", v[k]);

	}

}