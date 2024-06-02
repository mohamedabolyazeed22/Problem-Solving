#include <iostream>
#include <iomanip> // for fixed and setprecision

using namespace std;

int main()
{
  double D, P;
  cin >> D >> P;

  double T = (D / P) + 37;

  cout << T << endl;

  return 0;
}
