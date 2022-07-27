#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    // int maxval = max(a, )
    if (a == max(a, max(b, c)))
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            flag = true;
        }
    }
    else if (b == max(a, max(b, c)))
    {
        if (pow(b, 2) == pow(a, 2) + pow(c, 2))
        {
            flag = true;
        }
    }
    else if (c == max(a, max(b, c)))
    {
        if (pow(c, 2) == pow(a, 2) + pow(b, 2))
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Given are triplets";
    }
    else
    {
        cout << "not triplets";
    }

    return 0;
}