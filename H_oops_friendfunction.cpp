#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Complex {
  int a, b;

public:
  void setcomplex();
  void getcomplex();
  friend Complex sumcomplex(Complex o1, Complex o2);
};

void Complex::setcomplex() {
  cout << "Enter the first value for complex number" << endl;
  cin >> a;
  cout << "Enter the second value for complex number" << endl;
  cin >> b;
}

void Complex::getcomplex() {
  cout << "The complex number is " << a << " + " << b << "i" << endl;
}

Complex sumcomplex(Complex o1, Complex o2) {
  Complex o3;
  int a, b;
  o3.a = o1.a + o2.a;
  o3.b = o1.b + o2.b;
  return o3;
}
int main() {
  Complex first, second, third;
  first.setcomplex();
  first.getcomplex();

  second.setcomplex();
  second.getcomplex();

  third = sumcomplex(first, second);
  third.getcomplex();

  return 0;
}