#include <iostream>
using namespace std;

int main() {
    cout << "Enter your Name: " << flush;
    string input;
    cin >> input;
    cout << "You entered : " << input << endl;

    cout << "Enter a Number: " << flush;
    int value;
    cin >> value;
    cout << "You entered : " << value << endl;
    return 0;
}
