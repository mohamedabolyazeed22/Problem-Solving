#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  int T;
  cin >> T;

  for (int t = 0; t < T; t++)
  {
    int n;
    cin >> n;

    unordered_set<int> solvedProblems;

    for (int i = 0; i < n; i++)
    {
      int pi;
      cin >> pi;
      if (pi > 0)
      {
        solvedProblems.insert(i + 1);
      }
    }

    cout << solvedProblems.size() << endl;
  }

  return 0;
}
