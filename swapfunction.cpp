#include <iostream>
#include <string>
using namespace std;

void swapbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapbyreferance(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapbyreferancepointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "a = " << a << " and b = " << b << endl;
    swapbyvalue(a, b);
    cout << "a = " << a << " and b = " << b << endl;
    swapbyreferance(a, b);
    cout << "a = " << a << " and b = " << b << endl;
    swapbyreferancepointer(&a, &b);
    cout << "a = " << a << " and b = " << b << endl;

    return 0;
}