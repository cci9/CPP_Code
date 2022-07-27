#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constant variable definition
    const int i = 10;
    cout << i << endl;
    // i = 15; constant variable redefinition is not possible

    // manipulators
    int a = 5, b = 10, c = 12345454;
    cout << "value of a is without setw " << a << endl;
    cout << "value of b is without setw " << b << endl;
    cout << "value of c is without setw " << c << endl;

    cout << "value of a is with setw " << setw(10) << a << endl;
    cout << "value of b is with setw " << setw(10) << b << endl;
    cout << "value of c is with setw " << setw(5) << c << endl;
    return 0;
}