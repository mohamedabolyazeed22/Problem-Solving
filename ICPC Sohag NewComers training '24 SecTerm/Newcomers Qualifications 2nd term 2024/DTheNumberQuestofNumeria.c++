#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  bool found = false;
  for (int num1 = 1; num1 <= N / 2; num1++)
  {
    int num2 = N - num1;
    if (num2 > num1)
    {
      cout << num1 << " " << num2 << endl;
      found = true;
    }
  }
  if (!found)
  {
    cout << -1 << endl;
  }

  return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int num1 = 1; num1 <= x / 2; num1++) {
        int num2 = x - num1;
        cout << num1 << " " << num2 << endl;
    }
    return 0;
}
*/