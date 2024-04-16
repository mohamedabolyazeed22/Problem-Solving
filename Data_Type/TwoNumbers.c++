#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "floor " << x << " / " << y << " = " << floor(x / static_cast<double>(y)) << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil(x / static_cast<double>(y)) << endl;
    cout << "round " << x << " / " << y << " = " << round(x / static_cast<double>(y)) << endl;
    return 0;
}