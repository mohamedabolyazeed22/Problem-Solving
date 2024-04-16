#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int digit = x;
    while (digit >= 10) {
        digit /= 10;
    }
    
    if (digit % 2 == 0) {
        cout << "EVEN";
    } else {
        cout << "ODD";
    }

    return 0;
}
