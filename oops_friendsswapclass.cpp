#include <iostream>
using namespace std;

class B;
class A
{
    int num1;

public:
    void setval(int a)
    {
        num1 = a;
    }
    void disval()
    {
        cout << "entered value is " << num1 << endl;
    }
    friend void swap(A &, B &);
};

class B
{
    int num2;
    friend void swap(A &, B &);

public:
    void setval(int a)
    {
        num2 = a;
    }
    void disval()
    {
        cout << "entered value is " << num2 << endl;
    }
};

void swap(A &a, B &b)
{
    int temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}
int main()
{
    A a;
    a.setval(5);
    a.disval();
    B b;
    b.setval(10);
    b.disval();

    cout << "\nLets run swap function\n";
    swap(a, b);
    a.disval();
    b.disval();
    return 0;
}