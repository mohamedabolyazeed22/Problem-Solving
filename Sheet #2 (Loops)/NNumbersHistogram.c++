#include <iostream>
using namespace std;

int main()
{
  char S;
  int N;
  cin >> S >> N;

  for (int i = 0; i < N; ++i)
  {
    int Xi;
    cin >> Xi;

    for (int j = 0; j < Xi; ++j)
    {
      cout << S;
    }
    cout << endl;
  }

  return 0;
}
