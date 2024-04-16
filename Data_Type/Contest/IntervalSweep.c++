#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if ((num1 == 0 && num2 == 0) || abs(num1 - num2) >= 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}

int main () 
{
    
}