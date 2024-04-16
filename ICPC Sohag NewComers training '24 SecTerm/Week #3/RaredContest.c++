#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    bool rating_changed = (x != y);
    bool unrated = false;

    for (int i = 1; i < n; ++i) {
        int prev, curr;
        cin >> prev >> curr;

        if (prev != curr) {
            rating_changed = true;
        }

        if (curr > x) {
            unrated = true;
        }

        x = prev;
    }

    if (rating_changed) {
        cout << "rated" << endl;
    } else if (unrated) {
        cout << "unrated" << endl;
    } else {
        cout << "maybe" << endl;
    }

    return 0;
}
