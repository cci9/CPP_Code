#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool armstrong(int a)
{
    int b = a;
    int sum = 0;
    bool armflag = false;
    while (b > 0)
    {
        sum = sum + pow(b % 10, 3);
        b = b / 10;
    }
    if (sum == a)
    {
        armflag = true;
    }
    return armflag;
}

int main()
{
    int a;
    cout << "Entered a number to check if armstrong or not" << endl;
    cin >> a;
    if (armstrong(a))
    {
        cout << "Entered number is an armstrong number" << endl;
    }
    else
    {
        cout << "Entered number is not an armstrong number" << endl;
    }
    return 0;
}