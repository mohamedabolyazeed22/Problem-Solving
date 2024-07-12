#include <iostream>
using namespace std;

class Date
{
private:
  int day;
  int month;
  int year;

public:
  Date() : day(1), month(1), year(2000) {}

  Date(int d, int m, int y) : day(d), month(m), year(y) {}

  void setDay(int d)
  {
    day = d;
  }

  int getDay() const
  {
    return day;
  }

  void setMonth(int m)
  {
    month = m;
  }

  int getMonth() const
  {
    return month;
  }

  void setYear(int y)
  {
    year = y;
  }

  int getYear() const
  {
    return year;
  }

  void printDate() const
  {
    cout << day << "/" << month << "/" << year << endl;
  }

  int subData(const Date &d) const
  {
    int total_Days1 = day + (month - 1) * 30 + (year - 1) * 365;
    int total_Days2 = d.day + (d.month - 1) * 30 + (d.year - 1) * 365;

    return abs(total_Days1 - total_Days2);
  }
};

int main()
{
  Date date1(20, 6, 2018);
  Date date2(21, 7, 2019);

  cout << "Date 1: ";
  date1.printDate();

  cout << "Date 2: ";
  date2.printDate();

  int difference = date1.subData(date2);
  cout << "Difference between dates: " << difference << " days" << endl;

  return 0;
}