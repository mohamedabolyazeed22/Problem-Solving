#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Department
{
private:
  string departmentName;
  string location;
  string headOfDepartment;

public:
  Department(string deptName, string loc, string head) : departmentName(deptName), location(loc), headOfDepartment(head)
  {
  }

  void setDepartmentName(string deptName)
  {
    departmentName = deptName;
  }
  string getDepartmentName() const
  {
    return departmentName;
  }

  void setLocation(string loc)
  {
    location = loc;
  }
  string getLocation() const
  {
    return location;
  }

  void setHeadOfDepartment(string head)
  {
    headOfDepartment = head;
  }
  string getHeadOfDepartment() const
  {
    return headOfDepartment;
  }

  void displayDepartment() const
  {
    cout << "Department Name: " << departmentName << endl;
    cout << "Location: " << location << endl;
    cout << "Head of Department: " << headOfDepartment << endl;
  }
};

class University
{
private:
  string name;
  vector<Department> departments;

public:
  University(string na) : name(na)
  {
  }

  void addDepartment(const Department &dept)
  {
    departments.push_back(dept);
  }

  void displayDepartments() const
  {
    cout << "University: " << name << endl;
    cout << "Departments:" << endl;
    for (const Department &dept : departments)
    {
      dept.displayDepartment();
      cout << endl;
    }
  }
};

int main()
{
  University uni("EELU");

  Department dept1("Data Structure", "Lab 2", "Dr.Yaser");
  Department dept2("Network fundamentals", "Lab 3", "Dr.Mohamed Ashor");
  Department dept3("Operations Research (OR)", "Lab 1", "Dr.Amany");

  uni.addDepartment(dept1);
  uni.addDepartment(dept2);
  uni.addDepartment(dept3);

  uni.displayDepartments();

  return 0;
}
