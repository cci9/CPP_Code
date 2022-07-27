#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    cout << "Value of a is " << a++ << " " << a << endl;
    cout << endl;
    int b = 10;
    cout << b << endl;
    cout << "Value of b is " << ++b << " " << b << endl;
    cout << endl;

    a = 10;
    cout << a << endl;
    cout << "Value of a is " << a-- << " " << a << endl;
    cout << endl;
    b = 10;
    cout << b << endl;
    cout << "Value of b is " << --b << " " << b << endl;

    return 0;
}