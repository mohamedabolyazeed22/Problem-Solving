#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    double newNum1 = num2 * log(num1);
    double newNum2 = num4 * log(num3);

    if (newNum1 > newNum2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
