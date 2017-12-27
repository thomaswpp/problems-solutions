#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{

	int g, p, s, k, w;
	int run[101][101], sistema[101], score[101];
	//int score, prev_score;
	vector<int > win;

	while ( scanf("%d %d", &g, &p), (g || p))
	{

		//read position
		for(int i=0; i < g; i++)
			for(int j=0; j < p; j++)
				cin >> run[i][j];		

		cin >> s;
		//begin score
		for(int d=0; d < s; d++)
		{
			memset(score, 0, sizeof(score)); 
			memset(sistema, 0, sizeof(sistema));

			cin >> k;
			for(int j=0; j < k; j++)
				cin >> sistema[j];

			for(int i=0; i < g; i++)
				for(int j=0; j < p; j++)
					score[j] += sistema[run[i][j]-1];

			w = 0;
			for(int i=0; i < p; i++)
				if(score[i] > w)
					w = score[i];

			bool space = false;

			for(int i=0; i < p; i++)
			{
				if(score[i] == w)
				{
					if(!space)
					{
						cout << i+1;
						space = true;
					} else
						cout << " " << i+1;
				}
			}

			cout << endl;

		}	
		//end score

	}

	return 0;
}