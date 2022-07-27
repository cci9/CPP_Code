#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void magicnum(int num)
{
    int numori = num;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    int sumori = sum;
    int rev = 0;
    while (sum > 0)
    {
        int lastdi = sum % 10;
        rev = 10 * rev + lastdi;
        sum /= 10;
    }
    if (numori == sumori * rev)
    {
        cout << numori << " number is a magic number" << endl;
    }
}

int main()
{
    for (int i = 0; i <= 10000; i++)
    {
        magicnum(i);
    }

    return 0;
}