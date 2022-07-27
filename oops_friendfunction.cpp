#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnum(int c, int d)
    {
        a = c;
        b = d;
    }
    void printcomplex(void)
    {
        cout << "Your complex num is " << a << " + " << b << "i\n";
    }
    friend complex sumcomplex(complex o1, complex o2);
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setnum(1, 5);
    c1.printcomplex();

    c2.setnum(2, 6);
    c2.printcomplex();

    sum = sumcomplex(c1, c2);
    sum.printcomplex();

    return 0;
}