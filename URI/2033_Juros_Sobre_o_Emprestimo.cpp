#include <bits/stdc++.h>

using namespace std;

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      long double c, i, js, jc, m, d;

      while( cin >> c >> i >> t )
      {
          //juros simples
          js = c * i * t;
          //juros compostos
          m = c * powl( (1+i), t);
          jc = m-c;

          d = abs(js - jc);

          printf("%s%.2Lf\n", "DIFERENCA DE VALOR = ", d);
          printf("%s%.2Lf\n", "JUROS SIMPLES = ", js);
          printf("%s%.2Lf\n", "JUROS COMPOSTO = ", jc);

      }

      return 0;
}
