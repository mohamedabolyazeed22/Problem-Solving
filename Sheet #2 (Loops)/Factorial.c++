#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int x;
        cin >> x;
        long long factorial = 1; 
    for (int i = 2; i <= x; ++i) {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}
