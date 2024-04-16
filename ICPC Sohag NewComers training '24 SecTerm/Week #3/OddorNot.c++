#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            int count_odd = 0;
            for (int i = l - 1; i < r; ++i) {
                if (a[i] % 2 != 0) {
                    ++count_odd;
                }
            }

            if (sum % 2 != 0) {
                cout << "NO" << endl; 
            } else {
                if (count_odd % 2 != 0) {
                    cout << "YES" << endl; 
                } else {
                    cout << "NO" << endl; 
                }
            }
        }
    }

    return 0;
}
