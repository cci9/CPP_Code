#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void print()
    {
        cout << "complex num is " << a << " + " << b << "*i" << endl;
    }
    complex();
};
complex::complex()
{
    a = 10;
    b = 5;
}

int main()
{
    complex comp;
    comp.print();
    return 0;
}