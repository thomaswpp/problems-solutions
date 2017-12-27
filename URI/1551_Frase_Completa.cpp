#include <iostream>
#include <cstring>

using namespace std;

int contar_letras(string frase, int *v)
{
	int count = 0, idx;

	for(int i = 0; i < 122; i++)
		v[i] = 0;

	for(int i = 0; i < frase.size(); i++)
	{
		idx = frase[i];
		
		if(idx >= 97 && idx <= 122)
		{
			if(v[idx] == 0) 
			{
				count++;
				v[idx] = 1;
			}
		}
	}
	

	return count;
}

void print(int count)
{
	if(count >= 25)
		cout << "frase completa";
	else if(count >= 13)
		cout << "frase quase completa";
	else
		cout << "frase mal elaborada";

	cout << endl;
}

int main()
{

	int n, count, v[122];
	string frase;

	cin >> n;
	cin.ignore();
	while(n--)
	{
		getline(cin, frase);
		count = contar_letras(frase, v);
		print(count);
	}

	return 0;
}