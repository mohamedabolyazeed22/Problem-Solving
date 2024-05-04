#include<iostream>
 
using namespace std;
 
int main() {
    int num, div, flag = 0;
    cin >> num;
    div = num / 2;
    for (int i = 2; i <= div; i++) {
        if (num % i == 0) {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "YES" << endl;
    }   
}
