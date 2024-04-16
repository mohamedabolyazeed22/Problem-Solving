#include <iostream>
using namespace std;

int main() {
    char myChar;
    cin >> myChar;

    char nextChar;
    if (myChar == 'z') {
        nextChar = 'a';
    } else {
        nextChar = myChar + 1;
    }

    cout << nextChar;

    return 0;
}


/*
#include <iostream>
using namespace std;

int main ()
{
    char myChar , recChar ;
    cin >> myChar ;
    if (myChar = 97)
    {
        myChar += 1 ;
        recChar = myChar;
        cout << recChar ;
    }
    
}
*/