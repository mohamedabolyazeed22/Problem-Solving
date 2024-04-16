#include <iostream>
using namespace std;

int main () 
{
    int size, flag = 0;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size/2; i++) 
    {
        if (arr[i] != arr[size - 1 - i])
        {
            flag = 1 ;
            break ;
        }
    }
    if (flag == 0)
    {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
