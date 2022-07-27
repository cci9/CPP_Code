#include <iostream>
#include <typeinfo>
using namespace std;
int a = 42;
void sum()
{
    int a = 15;
    cout << "\nthe value of a is " << a;
}

int main()
{
    cout << "Chetan starting with cpp\n";
    int a = 5, b = 6;
    bool trueval = true;
    float c = 3.147;
    char e = 'c';
    cout << "The value of a is " << a << ". The value of b is " << b << "\n";
    cout << typeid(e).name() << "\n";
    cout << trueval;

    sum();
    return 0;
}
