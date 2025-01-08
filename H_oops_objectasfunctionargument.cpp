#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Complex{
    int a, b;
    public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getcomplex()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    void complexsum(Complex comp1, Complex comp2);
};

void Complex::complexsum(Complex comp1, Complex comp2)
{
    a = comp1.a + comp2.a;
    b = comp1.b + comp2.b;
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    Complex first, second, third;
    first.setdata(5,6);
    first.getcomplex();

    second.setdata(5,6);
    second.getcomplex();

    third.complexsum(first, second);
    return 0;
}