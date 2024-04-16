#include <iostream>
using namespace std;

int main() {
    int N, years, months, days; 
    cin >> N;

    years = N / 365;
    days = N % 365;
    months = days / 30; 
    days = days % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
