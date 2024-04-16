#include <iostream>
using namespace std;

int main() {
    char myChar, resChar;
    cin >> myChar;
    int ask = myChar;
    
    if (ask >= 97 && ask <= 122) { 
        ask -= 32; 
        resChar = ask;
        cout << resChar << endl;
    } else if (ask >= 65 && ask <= 90) {
        ask += 32;
        resChar = ask;
        cout << resChar << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z') {
        X -= 32;
    } else if (X >= 'A' && X <= 'Z') {
        X += 32;
    }

    cout << X << endl;

    return 0;
}

*/