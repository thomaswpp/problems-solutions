#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  int n, q, i, j;
  char s[100005], r[105];

  scanf("%d", &n);
  while(n--)
  {
    scanf("%s\n", s);
    scanf("%d", &q);

    while(q--)
    {

        scanf("%s\n", r);
        i = j = 0;
        while( r[j] != '\0'  &&  s[i] != '\0' )
        {
          if( r[j] == s[i] )
            j++;
          i++;
        }

        if( strlen(r) <= j )
          printf("Yes");
        else
          printf("No");

        printf("\n");
    }

  }

  return 0;
}
