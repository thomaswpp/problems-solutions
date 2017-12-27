#include <iostream>
#include <cstring>

using namespace std;

//max	
int max(int a, int b)
{
	if(a > b)
		return a;

	return b;
}

int main(void)
{
	int n, custo, receitas[51], max_ending_here, max_so_far, x;

	while(cin >> n && n != EOF)	
	{

		cin >> custo;

		memset(receitas, 0, sizeof(receitas));

		max_ending_here = max_so_far = 0;

		for(int i=0; i < n; i++)
		{
			cin >> x;
			receitas[i] = x - custo;
		}
		//max subarray (subarranjo max)
		for(int i=0; i < n; i++)
		{
			 x = receitas[i];
			 max_ending_here = max(x, max_ending_here + x);
       		 max_so_far = max(max_so_far, max_ending_here);
		}
		cout << max_so_far << endl;
	}


	return 0;

}