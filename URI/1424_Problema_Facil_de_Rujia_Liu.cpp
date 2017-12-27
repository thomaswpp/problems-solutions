#include <bits/stdc++.h>
#define D(x) cout << #x " = " << (x) << endl
#define endl '\n'
using namespace std;

#define MAX 1000005

//matrix adj com vector
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int m, n, v, k, aux;
	vector <vector <int>> adj(MAX, vector<int>());

	while(cin >> n >> m)
	{
		
		for(int i=0; i < n; i++)
		{
			cin >> aux;
			adj[aux].push_back(i);
		}

		for(int i=0; i < m; i++)
		{
			cin >> k >> v;

			if(k > adj[v].size())
				cout << 0 << '\n';
			else
				cout << adj[v][--k] + 1 << '\n';
		}

		for(int i=0; i < MAX; i++)
			adj[i].clear();	
	}

	return 0;
}