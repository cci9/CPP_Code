#include <iostream>
using namespace std;

// function as call by value
void swap_byvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// function as call by reference with pointer
void swap_byreferencepointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function as call by reference without pointer
void swap_byreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 5, b = 8;
    cout << "a value is = " << a << " b value is = " << b << endl;
    /*call by value does not change the actual values
    they just take the actual values and use it in the function */
    swap_byvalue(a, b);
    cout << "a value is = " << a << " b value is = " << b << endl;

    /*call by reference using pointer takes the address of the actual values
    so it is possible to actually change the value at that address */
    swap_byreferencepointer(&a, &b);
    cout << "a value is = " << a << " b value is = " << b << endl;

    /*call by reference takes the address of the actual values
    so it is possible to actually change the value at that address */
    swap_byreference(a, b);
    cout << "a value is = " << a << " b value is = " << b << endl;

    /*call by reference using pointer takes the address of the actual values
    so it is possible to actually change the value at that address */
    int *aptr = &a;
    int *bptr = &b;
    swap_byreferencepointer(aptr, bptr);
    cout << "a value is = " << a << " b value is = " << b << endl;
    return 0;
}