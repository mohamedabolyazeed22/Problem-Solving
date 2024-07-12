// Author Abolyazeed(El3oz)
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
  string name;
  int age;
  double grade;

public:
  Student() : name(""), age(0), grade(0.0) {}

  Student(string n, int a, double g) : name(n), age(a), grade(g) {}

  Student(const Student &s) : name(s.name), age(s.age), grade(s.grade) {}

  void setName(string n)
  {
    name = n;
  }

  void setAge(int a)
  {
    age = a;
  }

  void setGrade(double g)
  {
    grade = g;
  }

  string getName() const
  {
    return name;
  }

  int getAge() const
  {
    return age;
  }

  double getGrade() const
  {
    return grade;
  }

  void printDetails() const
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
  }
};

int main()
{
  Student student1;
  student1.setName("Mohamed Abolyazeed ");
  student1.setAge(21);
  student1.setGrade(96.5);

  Student student2("Motaz Dahy", 21, 89.6);

  cout << "Student 1 Details:" << endl;
  student1.printDetails();
  cout << endl;

  cout << "Student 2 Details:" << endl;
  student2.printDetails();
  cout << endl;

  return 0;
}
