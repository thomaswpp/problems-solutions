#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> v;

int main() {
   
    int n, k, luck, importance, total = 0;
    
    cin >> n >> k;
    for(int i=0; i < n; i++)
    {
        cin >> luck >> importance;

        total += luck;

        if(importance)
            v.push_back(luck);
    }
       
    sort(v.begin(), v.end());
   
    int d = v.size() - k;
    
    for(int i=0; i < d; i++)
        total -= 2*v[i];
    
    cout << total << endl;
    
    return 0; 
}

