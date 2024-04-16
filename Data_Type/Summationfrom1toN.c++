#include <iostream>
using namespace std;

int main()
{
    int x ;
    cin >> x;
    long long sum = 0;
    for (int i = 1; i <= x; i++) 
    {
        sum += i; 
    }
    cout << sum << endl; 
    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    long long sum = (long long)x * (x + 1) / 2;
    cout << sum << endl;
    return 0;
}
*/