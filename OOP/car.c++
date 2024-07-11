#include <iostream>
using namespace std;

class Car
{
private:
  string maker;
  int model;
  string color;

public:
  // constructor-intialization
  Car(string m, int mo, string c) : maker(m), model(mo), color(c)
  {
    cout << "Details is cars" << endl;
  }

  void setmaker(string m)
  {
    maker = m;
  }

  string getmaker() const
  {
    return maker;
  }

  void setmodel(int mo)
  {
    model = mo;
  }

  int getmodel() const
  {
    return model;
  }

  void setcolor(string c)
  {
    color = c;
  }

  string getcolor() const
  {
    return color;
  }

  void print() const
  {
    cout << "Maker: " << getmaker() << endl;
    cout << "Model: " << getmodel() << endl;
    cout << "Color: " << getcolor() << endl;
  }
};

int main()
{
  Car c1("Honda", 2020, "Black");

  c1.print();

  return 0;
}
