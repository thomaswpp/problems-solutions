#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>

using namespace std;


int main()
{
  int nWords, len, maxLine, maxChar;
  float nline, nPage, nChars;
  char word[70];

  while(scanf("%d %d %d", &nWords, &maxLine, &maxChar) != EOF)
  {
      nChars = 0;
      nline = 1;

      while( nWords-- )
      {

          scanf("%s", word);
          len = strlen( word );

          //space
          if( nChars > 0 ) nChars++;

          nChars += len;

          if( nChars == maxChar )
          {
              if( nWords > 0 )
                nline++;
              nChars = 0;
          }

          if( nChars > maxChar )
          {
             nline++;
             nChars = len;
          }

      }
      nPage = ceil(nline/maxLine);

      printf( "%d\n", (int)nPage );

  }

  return 0;
}
