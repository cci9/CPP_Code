#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    cout << "Factoril calculating " << n << endl;
    return n * factorial(n - 1);
}
int fibonacci(int fib)
{
    int fib_val;
    int static a = 0, b = 1;
    if (fib < 1)
    {
        return a;
    }
    else
    {
        fib_val = a + b;
        a = b;
        cout << b << "\t";
        b = fib_val;
        return fibonacci(fib - 1);
    }
}
int main()
{
    int n, fact, fib, fiblastval;
    cout << "Enter the number of which factorial need to find:" << endl;
    cin >> n;
    fact = factorial(n);
    cout << "The factorial is " << fact << endl;
    cout << "Enter the number till which the fibonacci is to be printed:" << endl;
    cin >> fib;
    cout << "The fibonacci series is:\n";
    fiblastval = fibonacci(fib);
    cout << "\nThe last value of fibonacci is " << fiblastval << endl;

    return 0;
}