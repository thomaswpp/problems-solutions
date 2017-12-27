#include <bits/stdc++.h>
#include <string>
#include <stack>

using namespace std;

bool combina_base(char a, char b)
{
	if( (a == 'S' && b == 'B') || (a == 'B' && b == 'S') )
		return true;
	else if( (a == 'F' && b == 'C') || (a == 'C' && b == 'F') )
		return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string fita;
	stack<char> bases;
	int combinacoes = 0;
	while( cin >> fita )
	{

		for(int i = 0; i < fita.size(); i++ )
		{
			
			if(!bases.empty())
			{
				if ( combina_base( fita[i], bases.top() ) )
				{
					bases.pop();
					combinacoes++;
				} 
				else
					bases.push(fita[i]);
			}
			else
				bases.push(fita[i]);

		}
		printf("%d\n", combinacoes);
		combinacoes = 0;
		bases = stack<char>();
	}


	return 0;
}