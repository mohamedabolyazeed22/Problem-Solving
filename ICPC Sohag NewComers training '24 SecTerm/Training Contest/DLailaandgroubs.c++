#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int groups = N / 3;
  if (N % 3 != 0)
  {
    cout << groups << endl;
  }
  return 0;
}
