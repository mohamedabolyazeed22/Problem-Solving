#include <iostream>
using namespace std;

int main ()
{
    int num1 , num2 , num3 , num4 ;
    cin >> num1 >> num2 >> num3 >> num4 ;
    long long result = (long long)num1 * num2 * num3 * num4;
    
    int last_two_digits = result % 100 ;
    cout << last_two_digits ;
}