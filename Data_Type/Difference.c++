#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long result = static_cast<long long>(a) * b - static_cast<long long>(c) * d;

    cout << "Difference = " << result << endl;

    return 0;
}
