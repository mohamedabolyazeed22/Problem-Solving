#include <iostream>
#include <vector>
using namespace std;

class Course
{
private:
  string courseName;
  int duration;

public:
  Course(string name, int dur) : courseName(name), duration(dur) {}

  string getName() const
  {
    return courseName;
  }
  int getDuration() const
  {
    return duration;
  }
};

class Student
{
private:
  string name;
  int age;
  int rollNumber;
  vector<Course *> enrolledCourses;

public:
  Student(string n, int a, int rn) : name(n), age(a), rollNumber(rn) {}

  string getName() const
  {
    return name;
  }
  int getAge() const
  {
    return age;
  }
  int getRollNumber() const
  {
    return rollNumber;
  }

  void addCourse(Course *course)
  {
    enrolledCourses.push_back(course);
  }
  void listEnrolledCourses() const
  {
    cout << " Courses With Student:" << endl;
    for (const auto &course : enrolledCourses)
    {
      cout << "  " << course->getName() << " (" << course->getDuration() << ")" << endl;
    }
  }

  void printStudentDetails()
  {
    cout << "   Student Details   " << "\n"
         << "Student Name: " << name << "\n"
         << "Student Age: " << age << "\n"
         << "Student Roll Number: " << rollNumber << "\n";

    listEnrolledCourses();
  }
};

int main()
{
  Course course1("Data Structure", 12);
  Course course2("Web Technology", 15);
  Course course3("Software Engineering", 10);

  Student student("Mohameed Abolyazeed", 21, 2200337);
  student.addCourse(&course1);
  student.addCourse(&course2);
  student.addCourse(&course3);

  student.printStudentDetails();

  return 0;
}