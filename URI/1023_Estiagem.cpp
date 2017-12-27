#include <bits/stdc++.h>
#include <map>
#include <math.h>

using namespace std;

struct acompare {
    bool operator()(const int& a, const int& b) const {
        return a < b;
    }
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, x, y, consumo_total, moradores_total, cid = 0, space;
	map<int, int, acompare> v;

	bool first = false;

	while( cin >> n && n )
	{

		if( first )
			printf("\n\n");

		cid++;
		space = consumo_total = moradores_total = 0;
		for( int i = 0; i < n; i++ )
		{
			cin >> x >> y;
			v[y/x] += x;
			
			moradores_total += x;
			consumo_total += y;
		}

		printf("Cidade# %d:\n", cid);

		map <int, int> :: iterator itr;
		for( itr = v.begin(); itr != v.end(); ++itr )
		{
			printf("%d-%d", itr->second, itr->first);

			if(++space < v.size())
				printf(" ");
		}

		printf("\nConsumo medio: %.2f m3.", floor(100 * (float)consumo_total/moradores_total) / 100);
		
		first = true;

		v = map<int, int, acompare>();
	}

	printf("\n");
	return 0;
}