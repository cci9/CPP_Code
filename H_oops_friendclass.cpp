#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Complex;
class Calculator
{
public:
    int add(int n1, int n2)
    {
        return (n1 + n2);
    }
    int sumrealnum(Complex o1, Complex o2);
    int sumcompnum(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

    // individual function of class friend
    friend int Calculator::sumrealnum(Complex o1, Complex o2);
    friend int Calculator::sumcompnum(Complex o1, Complex o2);

    // complete class as friend = so each function will get access
    friend class Calculator;
public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout<<"the complex number is: "<<a<< " + "<<b<<"*i"<<endl;
    }
};

int Calculator::sumrealnum(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumcompnum(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    Complex o1, o2;
    o1.setnum(1,2);
    o2.setnum(3,5);
    o1.printnum();
    o2.printnum();
    Calculator cal;
    int result = cal.sumrealnum(o1, o2);
    cout<<"Sum of real part is "<<result<<endl;
    int result2 = cal.sumcompnum(o1, o2);
    cout<<"Sum of complex part is "<<result2<<endl;
    return 0;
}