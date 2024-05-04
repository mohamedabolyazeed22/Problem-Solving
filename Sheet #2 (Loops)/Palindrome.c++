#include <iostream>
using namespace std;
 
int main() {
  int num, tmp, rev = 0;
  cin >> num;
  tmp = num;
  while (num) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  if (tmp == rev) {
    cout << rev << endl << "YES" << endl;
  } else {
    cout << rev << endl << "NO" << endl;
  }
  return 0;
}
