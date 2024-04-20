#include <iostream>
using namespace std;

int main ()
{
    int NumberDogs = 5 ;
    int NumberCats = 7 ;
    int NumberAnimals = NumberCats + NumberDogs ;

    cout << "Number of dog: " << NumberDogs << endl;
    cout << "Number of cat: " << NumberCats << endl ;
    cout << "Total number of animals: " << NumberAnimals << endl ;

    cout << "New dog acquried!" << endl;

    NumberDogs = NumberDogs + 1 ;

    cout << "New number of dog: " << NumberDogs << endl ;

    return 0 ;

}