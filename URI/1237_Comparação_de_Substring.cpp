#include <iostream>
#include <string>
using namespace std;

int main()
{

  string s1, s2;
  int max, array[51][51];

  while(getline(cin, s1) && getline(cin, s2))
  {

      max = 0;
     for( int i = 0; i <= s2.size(); i++ )
        for( int j = 0; j <= s1.size(); j++ )
              array[i][j] = 0;

      for( int i = 1; i <= s2.size(); i++ )
      {
        for( int j = 1; j <= s1.size(); j++ )
        {
            if( s2[i-1] == s1[j-1] )
            {
                array[i][j] = array[i-1][j-1] + 1;
                if( max < array[i][j])
                  max = array[i][j];
            }
            else
              array[i][j] = 0;
        }

      }

      cout << max << endl;
  }


  return 0;
}
