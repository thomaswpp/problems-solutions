#include <iostream>
#include <string>

using namespace std;


int main()
{

	int n, tam, meio;
	char c;
	string texto, inv;

	cin >> n;

	cin.ignore();

	while(n--)
	{
		
		getline(cin, texto);
		inv = texto;

		tam = texto.size();
		for(int i=0, j=tam-1; i < tam; j--, i++)
		{
			c = texto[i];

			if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
				c += 3;

			inv[j] = c;
		}

		for(int i= tam/2; i < tam ; i++)
			inv[i]--;

		cout << inv << endl;

	}

}