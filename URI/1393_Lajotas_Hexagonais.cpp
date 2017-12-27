#include <iostream>

using namespace std;


int fibonacci(int n)
{
  int n1 = 1, n2 = 1, sum;

  for(int i=1; i < n; i++)
  {
    sum = n1 + n2;
    n2 = n1;
    n1 = sum;
  }

  return n1;
}

int main()
{
  int n;

  while(cin >> n && n)
  {
    cout << fibonacci(n) << endl;
  }

  return 0;
}
