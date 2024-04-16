#include<iostream>
using namespace std;

int main ()
{
    char myChar ;
    cin >> myChar ;
    if (myChar >= 97 && myChar <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
     } else if (myChar >= 65 && myChar <= 90) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" ;
        }else{
            cout << "IS DIGIT" ;
        }
}