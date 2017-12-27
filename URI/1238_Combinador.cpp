#include <iostream>
#include <string>

using namespace std;

int maior(int a, int b)
{
  if(a >= b) return a;

  return b;
}
int main()
{
  int n, tam;
  string s1, s2;
  
  cin >> n;

  while(n--)
  {
    cin >> s1 >> s2;

    tam = maior(s1.size(), s2.size());

    for(int i = 0; i < tam; i++)
    {
        if(i < s1.size())
          cout << s1[i];

        if(i < s2.size())
          cout << s2[i];
    }

    cout << endl;

  }

  return 0;
}
