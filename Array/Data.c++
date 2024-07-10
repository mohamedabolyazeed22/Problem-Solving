#include <iostream>
using namespace std;

struct strInfo
{
  string FirstNme;
  string LastName;
  string Age;
  string Phone;
};

void ReadInfo(strInfo &Info)
{
  cout << "Please Enter First Name?\n";
  cin >> Info.FirstNme;

  cout << "Please Enter Last Name?\n";
  cin >> Info.LastName;

  cout << "Please Enter Age?\n";
  cin >> Info.Age;

  cout << "Please Enter Phone ?\n";
  cin >> Info.Phone;
}

void ReadPersonInfo(strInfo Person[2])
{
  ReadInfo(Person[0]);
  ReadInfo(Person[1]);
}

void PrintInfo(strInfo Info)
{
  cout << "\n****************************************\n";

  cout << "First Name: " << Info.FirstNme << endl;
  cout << "Last Name: " << Info.LastName << endl;
  cout << "Age: " << Info.Age << endl;
  cout << "Phone: " << Info.Phone << endl;

  cout << "\n****************************************\n";
}

void PrintPersonInfo(strInfo Person[2])
{
  cout << "\n****************************************\n";
  PrintInfo(Person[0]);
  PrintInfo(Person[1]);
}

int main()
{
  strInfo Person[2];

  ReadPersonInfo(Person);
  PrintPersonInfo(Person);
}