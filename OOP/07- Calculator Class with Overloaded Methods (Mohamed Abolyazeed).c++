#include <iostream>
using namespace std;

class Calculator
{
public:
  int add(int num1, int num2);
  double add(double num1, double num2, double num3);
};

int Calculator::add(int num1, int num2)
{
  return num1 + num2;
}

double Calculator::add(double num1, double num2, double num3)
{
  return num1 + num2 + num3;
}

int add(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  return sum;
}

double add(double arr[], int size)
{
  double sum = 0.0;
  for (int i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  Calculator calc;

  int Result = calc.add(2, 3);
  cout << "two integer parameters = " << Result << endl;

  double doubleResult = calc.add(2.5, 3.7, 1.2);
  cout << "three double parameters = " << doubleResult << endl;

  int intArr[] = {1, 2, 3, 4, 5};
  int intArraySum = add(intArr, 5);
  cout << "Sum of array integers as a parameter: " << intArraySum << endl;

  double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double doubleArraySum = add(doubleArr, 5);
  cout << "Sum of array double as a parameter: " << doubleArraySum << endl;

  return 0;
}
