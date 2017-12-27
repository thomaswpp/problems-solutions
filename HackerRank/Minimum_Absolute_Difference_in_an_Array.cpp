#include <bits/stdc++.h>
#include <limits>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int n, aux, min_absolute = INT_MAX;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    
    sort(a.begin(), a.end());
    
    for(int a_i = 0; a_i < n; a_i++)
    {
        aux = abs(a[a_i] - a[a_i+1]);
        if(aux < min_absolute)
            min_absolute = aux;
        
    }
    cout << min_absolute;
    
    return 0;
}
