#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;

    if (abs(num - floor(num)) < 1e-9) {
        cout << "int " << static_cast<int>(num) << endl;
    } else {
        cout << "float " << static_cast<int>(num) << " " << num - floor(num) << endl;
    }
    
    return 0;
}
