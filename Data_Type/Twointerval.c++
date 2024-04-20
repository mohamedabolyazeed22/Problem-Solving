#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    int start, end;

    if ((num3 < num1 && num4 < num1) || (num3 > num2 && num4 > num2)) {
        cout << -1 << endl;
    } else {
        start = max(num1, num3);
        end = min(num2, num4);
        
        cout << start << " " << end << endl;
    }

    return 0;
}
