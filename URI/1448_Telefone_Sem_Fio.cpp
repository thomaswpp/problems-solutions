#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t, n, inst, inst1, inst2, win1, win2, flag;
  string original, p1, p2;

  cin >> t;
  cin.ignore();
  inst = 0;
  while(t--)
  {
      getline(cin, original);
      getline(cin, p1);
      getline(cin, p2);

      n = original.size();

      inst1 = inst2 = win1 = win2 = flag = 0;

      for(int i = 0; i < n; i++)
      {
        if(original[i] == p1[i]) inst1++;
        if(original[i] == p2[i]) inst2++;

        if(!flag) {
          if(inst1 > inst2)
          {
            win1 = flag = 1;
          }
          else if(inst2 > inst1)
          {
            win2 = flag = 1;
          }
        }
      }

      cout << "Instancia " << ++inst << endl;
      if(inst1 == inst2)
      {
        if(win1)
          cout << "time 1";
        else if(win2)
          cout << "time 2";
        else
          cout << "empate";
      }
      else if(inst1 > inst2)
        cout << "time 1";
      else
        cout << "time 2";

      cout << endl << endl;

  }

  return 0;
}
