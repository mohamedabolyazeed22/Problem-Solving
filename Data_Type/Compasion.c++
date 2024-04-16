#include <iostream>
using namespace std;
 
int main()
{
    int num1, num2;
    char opr;
    cin >> num1 >> opr >> num2;
 
    if (opr == '=') {
        if (num1 == num2) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (opr == '>') {
        if (num1 > num2) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (opr == '<') {
        if (num1 < num2) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    return 0;
}
}