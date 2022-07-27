#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printcomplex()
    {
        cout << "the complex num is " << a << " + " << b << "*i" << endl;
    }
};

int main()
{
    complex c1;
    c1.printcomplex();
    complex c2(5);
    c2.printcomplex();
    complex c3(7, 8);
    c3.printcomplex();
    return 0;
}