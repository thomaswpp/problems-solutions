#include <iostream>
#include <string>

using namespace std;

//https://www.youtube.com/watch?v=qRNB8CV3_LU

int main()
{
	string s = "AABCDDBBBEA";
	char current, prev_char, max_char;	
	int cont = 1, max = 0;

	prev_char = max_char = s[0];


	for(int i = 1; i < s.size(); i++)
	{
		current = s[i];
		if(current == prev_char) cont++;
		else
		{
			if(max < cont)
			{
				max = cont;
				max_char = prev_char;
			}
			prev_char = current;
			cont = 1;
		}
	}


	cout << max_char << ":" << max << endl;

	return 0;
}