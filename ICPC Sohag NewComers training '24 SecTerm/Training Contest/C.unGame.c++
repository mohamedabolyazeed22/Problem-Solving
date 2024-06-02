#include <iostream>
using namespace std;

int main()
{
  long long a;
  cin >> a;

  if (a > 10)
  {
    if (a % 2 == 0)
    {
      cout << "Ali" << endl;
    }
    else
    {
      cout << "Ahmed" << endl;
    }
  }
  else
  {
    cout << "Draw" << endl;
  }

  return 0;
}