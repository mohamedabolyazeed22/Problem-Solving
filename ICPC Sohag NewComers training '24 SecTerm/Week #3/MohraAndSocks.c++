#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s[4];
    for (int i = 0; i < 4; ++i) {
        cin >> s[i];
    }
    sort(s, s + 4); 
    int extra_socks = 0;
    for (int i = 1; i < 4; ++i) {
        if (s[i] == s[i - 1]) {
            ++extra_socks;
        }
    }
    cout << extra_socks << endl;

    return 0;
}
