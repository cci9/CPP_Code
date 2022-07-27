#include <iostream>
using namespace std;

class X;
class Y
{
    int value2;

public:
    void setvalue(int a)
    {
        value2 = a;
    }
    friend void sum(X, Y);
};
class X
{
    int value;

public:
    void setvalue(int b)
    {
        value = b;
    }
    friend void sum(X, Y);
};

void sum(X o1, Y o2)
{
    cout << "The sum of both from different class is " << o1.value + o2.value2;
}
int main()
{
    X o1;
    o1.setvalue(5);
    Y o2;
    o2.setvalue(10);
    sum(o1, o2);
    return 0;
}