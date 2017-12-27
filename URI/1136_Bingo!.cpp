#include <iostream>
#include <string.h>
#include <math.h>

using namespace std; 
int bolas[95];
int is_bolas[95];
int main()
{
  int n, b, aux;

  while(cin >> n >> b && n && b)
  {

    memset(is_bolas, 0, sizeof is_bolas);

    for( int i = 0; i < b; i++ )
    {
      cin >> bolas[i];
      is_bolas[ bolas[i] ] = true;
    }

    if(b <= n)
    {
      for( int i = 0; i < b; i++ )
      {
        for( int k = 0; k < b; k++ )
        {
            aux = abs( bolas[i] - bolas[k] );
            if( aux <= n && i != k)
            {
              is_bolas[ aux ] = true;
            }
        }
      }

      for( int i = 0; i <= n; i++ )
      {
          if(is_bolas[i] == false)
          {
            cout << "N" << endl;
            goto fim;
          }
      }

      cout << "Y" << endl;

    } else
    {
      cout << "Y" << endl;
    }
    fim:;
  }

  return 0;
}
