#include <iostream>
using namespace std;

class Complex
{
private:
  double real;
  double img;

public:
  Complex(double r = 0, double i = 0) : real(r), img(i) {}

  double getReal() const
  {
    return real;
  }

  void setReal(double value)
  {
    real = value;
  }

  double getImg() const
  {
    return img;
  }

  void setImg(double value)
  {
    img = value;
  }

  Complex add(const Complex &complex_number) const
  {
    double real_part = real + complex_number.real;
    double img_part = img + complex_number.img;
    return Complex(real_part, img_part);
  }

  Complex subtract(const Complex &complex_number) const
  {
    double real_part = real - complex_number.real;
    double img_part = img - complex_number.img;
    return Complex(real_part, img_part);
  }

  void printComplex() const
  {
    if (img >= 0)
      cout << real << " + " << img << "i" << endl;
    else
      cout << real << " - " << -img << "i" << endl;
  }
};

int main()
{
  Complex c1(3, 4);
  Complex c2(1, 2);
  Complex c3 = c1.add(c2);
  c3.printComplex();

  Complex c4 = c1.subtract(c2);
  c4.printComplex();

  return 0;
}
