#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *b;
    b = &a;
    cout << "a=5, *b=&a" << endl;
    cout << "a value " << a << endl;
    cout << "a at address " << &a << endl;
    // referencing the address
    cout << "b locating address " << b << endl;
    // de-referencing the address
    cout << "b locating address has value " << *b << endl;
    cout << endl;

    // pointer address by & reference or double pointer
    int **c = &b;
    cout << "**c = &b" << endl;
    cout << "b pointers address " << &b << endl;
    cout << "c locating b pointers address " << c << endl;
    cout << "value at address c will be address of a " << *c << endl;
    cout << "double pointer of c will give value of a " << **c << endl;

    return 0;
}