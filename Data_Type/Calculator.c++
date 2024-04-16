#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string expression;
    getline(cin, expression);
    stringstream ss(expression);
    string part;
    string parts[3];
    int i = 0;
    while (getline(ss, part, '+')) {
        parts[i++] = part;
    }
    char operation = expression[parts[0].length()];
    parts[1] = parts[1].substr(0, parts[1].find(operation));

    int A = stoi(parts[0]);
    int B = stoi(parts[1]);

    int result = 0;
    switch (operation) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
    }

    cout << result << endl;

    return 0;
}
