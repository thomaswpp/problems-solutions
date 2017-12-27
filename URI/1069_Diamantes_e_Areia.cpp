#include <iostream>
#include <string>

using namespace std;


int main()
{
  int n, open, cont;
  string d;

  cin >> n;

  while(n--)
  {
    open = cont = 0;
    cin >> d;

    for(int i=0; i < d.size(); i++)
    {
        if(d[i] == '<')
          open++;
        else if(d[i] == '>')
        {
           if(open > 0){
              cont++;
              open--;
           }

        }
    }
    cout << cont << endl;


  }

  return 0;
}
