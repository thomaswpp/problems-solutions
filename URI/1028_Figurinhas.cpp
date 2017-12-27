#include <iostream>
#include <stdio.h>
using namespace std;



int mdc(int a, int b)
{
    if(b == 0) return a;
    else
    return mdc(b,a%b);
} 


int main(void)
{
	int n, f1, f2, a, b;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &f1, &f2);
		cout << mdc(f1, f2) << endl;
	}

	
}