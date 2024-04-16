#include<iostream>
using namespace std;

int main ()
{
    double x, y, z;
    cin >> x >> y >> z;
    double maximum = x;
    if (y > maximum)
        maximum = y;
    if (z > maximum)
        maximum = z;
    double minimum = x;
    if (y < minimum)
        minimum = y;
    if (z < minimum)
        minimum = z;
    cout << minimum << " " << maximum;
    return 0;
}
