#include <iostream>
#include <string>
using namespace std;
int reversenum(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum = sum * 10 + (a % 10);
        a = a / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number to reverse it" << endl;
    cin >> num;
    cout << "Entered number is " << num << endl;
    num = reversenum(num);
    cout << "Reversed number is " << num << endl;
    return 0;
}