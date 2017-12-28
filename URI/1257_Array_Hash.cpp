#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, t;
    string hash;

    cin >> n;

    while( n-- )
    {
        cin >> l;
        t = 0;
        for( int i = 0; i < l; i++ )
        {
            cin >> hash;
            for( int k = 0; k < hash.size(); k++ )
            {
                t += (hash[k] - 65) + i + k;
            }
        }
        cout << t << '\n';
    }
}
