#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex o1, complex o2);
    int sumimagcomplex(complex o1, complex o2);
};
class complex
{
    int a, b;
    // friend int calculator::sumrealcomplex(complex o1, complex o2);//however this will be cumbersome if you have 100
    // of class functions to make friend. hence the alternate
    //  way is to make that class as a friend
    friend class calculator;

public:
    void setnum(int c, int d)
    {
        a = c;
        b = d;
    }
    void printcomplex(void);
};

void complex::printcomplex(void)
{
    cout << "complex num is " << a << " + " << b << "*i\n";
}
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumimagcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex c1, c2;
    c1.setnum(5, 8);
    c1.printcomplex();
    c2.setnum(3, 4);
    c2.printcomplex();
    calculator calc;
    int resreal = calc.sumrealcomplex(c1, c2);
    int resimag = calc.sumimagcomplex(c1, c2);
    cout << "the sum of real and imag numbers of complex number of different class is " << resreal << " and " << resimag;
    return 0;
}