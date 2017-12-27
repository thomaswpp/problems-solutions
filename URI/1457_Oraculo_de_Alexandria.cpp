#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

long long int fatorial(int n, int k)
{
  long long int result = n, i = 1, r = k;

  if(n == 0) return 1;

  while((n-r) > 1)
  {
    result *= (n-r);
    r = ++i*k;
  }

  return result;

}


int main()
{
  char c[25];
  int n, t, k;

  cin >> t;
  while( t-- )
  {
    
    scanf("%d%s",&n,c);
    k = strlen(c);

    cout << fatorial(n, k) << endl;

  }

  return 0;
}
