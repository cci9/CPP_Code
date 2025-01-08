#include <array>
#include<iostream>
#include<cmath>
#include <istream>
#include<string>

using namespace std;

class A;
class B
{
    int b;
    friend class A;
    public:
    B(int bb)
    {
        b = bb;
    }
    void sumdataB(A& t);
};

class A
{
    int a;
    friend class B;
    public:
    A(int aa)
    {
        a = aa;
    }
    void sumdataA(B& t)
    {
        int temp = a + t.b;
        cout<<"sum of both class data is "<<temp<<endl;
    }

};
void B::sumdataB(A& t)
{
    int temp = b + t.a;
    cout<<"sum of both class data is "<<temp<<endl;
}

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex x1, Complex x2);
    public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout<<"Complex numbrer is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex x1, Complex x2)
{
    Complex x3;
    x3.setData(x1.a+x2.a, x1.b+x2.b);
    return x3;

};

int main()
{
    // A aaa(5);
    // B bbb(7);
    // bbb.sumdataB(aaa);
    // aaa.sumdataA(bbb);

    Complex o1, o2, o3;
    o1.setData(1, 2);
    o1.getData();
    o2.setData(1, 2);
    o2.getData();
    o3=sumComplex(o1,o2);
    o3.getData();
    return 0;
}