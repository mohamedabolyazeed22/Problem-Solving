#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2, num3; 
    char op1, op2; 
    cin >> num1 >> op1 >> num2 >> op2 >> num3; 
    int result;
    if (op1 == '+') {
        result = num1 + num2 ;
    } else if (op1 == '-') {
        result = num1 - num2 ;
    } else {
        result = num1 * num2 ;
    }
    if (result == num3) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
