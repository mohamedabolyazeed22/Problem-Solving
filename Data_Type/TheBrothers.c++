#include<iostream>
using namespace std;

int main() 
{
    string firstName1, secondName1;
    cin >> firstName1 >> secondName1;

    string firstName2, secondName2;
    cin >> firstName2 >> secondName2;

    if (secondName1 == secondName2) {
        cout << "ARE Brothers";
    } else {
        cout << "NOT";
    }
    
    return 0;
}