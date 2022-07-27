#include <iostream>
#include <string>
using namespace std;

int fact(int a)
{
    int factval = 1;
    for (int i = 2; i <= a; i++)
    {
        factval *= i;
    }
    return factval;
}

int main()
{
    cout << "Enter number for pascal trangle" << endl;
    int n;
    cin >> n;
    int pascalvalue;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            pascalvalue = fact(i) / (fact(i - j) * fact(j));
            cout << pascalvalue << "  ";
        }
        cout << endl;
    }
    return 0;
}