#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N; 
    cin >> N;
    int maxNumber = INT_MIN;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (num > maxNumber) {
            maxNumber = num;
        }
    }
    cout << maxNumber << endl;
    return 0;
}
