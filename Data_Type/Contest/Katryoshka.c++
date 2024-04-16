#include <iostream>
using namespace std;
/*
int main() {

    int eye, mouth, body;
    cin >> eye >> mouth;
    int counter = 0;
    while (eye != 0 && body != 0) {
        if (eye >= 1 && mouth >= 1 && body >= 1) {
            counter++;
            mouth--;
            eye--;
            body--;
        } 
        else if (eye >= 2 && body >= 1) {
            counter++;
            eye -= 2;
            body--;
        } 
        else if (eye >= 2 && mouth >= 1 && body >= 1) {
            counter++;
            eye -= 2;
            mouth--;
            body--;
        } 
        else {
            break;
        }
    }

    cout << counter;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    long long eye, mouth, body;
    cin >> eye >> mouth >> body;

    long long res = 0;
    if (eye == 0 || body == 0) {
        res = 0;
    } else {
        res = min(mouth, min(eye, body));

        eye -= res;
        body -= res;
        res += min(eye / 2, body);
    }

    cout << res << endl;

    return 0;
}
