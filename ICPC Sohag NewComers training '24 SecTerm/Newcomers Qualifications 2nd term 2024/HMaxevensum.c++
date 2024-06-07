#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> elements(n);
  int total_sum = 0;
  int smallest_odd = 10001;

  for (int i = 0; i < n; i++)
  {
    cin >> elements[i];
    total_sum += elements[i];
    if (elements[i] % 2 != 0 && elements[i] < smallest_odd)
    {
      smallest_odd = elements[i];
    }
  }

  if (total_sum % 2 == 0)
  {
    cout << total_sum << endl;
  }
  else
  {
    if (smallest_odd != 10001)
    {
      cout << total_sum - smallest_odd << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }

  return 0;
}
