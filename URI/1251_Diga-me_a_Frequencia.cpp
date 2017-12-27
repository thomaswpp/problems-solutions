#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 128

void create_vector_freq(string caracters, int *freq)
{

	for(int i=0; i < SIZE; i++)
		freq[i] = 0;

	char c;
	for(int i=0; i < caracters.size(); i++)
	{
		c = caracters[i];
		freq[c] += 1;
	}
}


int main(void)
{
	string caracters;
	char c;
	int freq[SIZE], count = 0;

	
	while(getline(cin, caracters))
	{
		if(count != 0)
			cout << endl;
		count++;


		create_vector_freq(caracters, freq);

		for(int i = 1; i <= caracters.size(); i++)
		{ 
			for(int k=127; k > 31; k--)
			{
				if(freq[k] == i)
					cout << k << " " << i << endl;
			}
		}

	}
	
	return 0;
}