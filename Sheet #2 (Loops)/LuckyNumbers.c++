#include <iostream>
#include <string>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  bool found = false;

  for (int i = A; i <= B; ++i)
  {
    string s = to_string(i);
    bool isLucky = true;

    for (char c : s)
    {
      if (c != '4' && c != '7')
      {
        isLucky = false;
        break;
      }
    }

    if (isLucky)
    {
      cout << i << " ";
      found = true;
    }
  }

  if (!found)
  {
    cout << -1;
  }

  cout << endl;

  return 0;
}
