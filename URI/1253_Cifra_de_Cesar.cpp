#include <iostream>
#include <string>
using namespace std;

void decifrar(string s, int pos)
{

	char c;
	for(int i=0; i < s.size(); i++)
	{
		c = s[i];
		if((c - pos) < 65) 
		{
			c = 90 - (65 - (c - pos) - 1);
		}
		else
			c = c - pos;

		cout << c;			
		
	}

	cout << endl;

}


int main()
{
	string s;
	int n, pos;

	cin >> n;
	cin.ignore();

	while(n--)
	{
		getline(cin, s);
		cin >> pos;
		decifrar(s, pos);
		cin.ignore();
	}


	return 0;

}