#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int x = 111;
    int y = 110;
    int xx = x;
    int yy = y;

    int minrun = min(xx, yy);
    string ans = "";
    int carry = 0;
    while (minrun > 0)
    {
        if (xx % 10 == 1 && yy % 10 == 1 && carry == 1)
        {
            ans += '1';
            carry = 1;
        }
        else if (xx % 10 == 1 && yy % 10 == 1 && carry == 0)
        {
            ans += '0';
            carry = 1;
        }
        else if (xx % 10 == 1 && yy % 10 == 0 && carry == 1)
        {
            ans += '0';
            carry = 1;
        }
        else if (xx % 10 == 1 && yy % 10 == 0 && carry == 0)
        {
            ans += '1';
            carry = 0;
        }
        else if (xx % 10 == 0 && yy % 10 == 1 && carry == 1)
        {
            ans += '0';
            carry = 1;
        }
        else if (xx % 10 == 0 && yy % 10 == 1 && carry == 0)
        {
            ans += '1';
            carry = 0;
        }
        else if (xx % 10 == 0 && yy % 10 == 0 && carry == 1)
        {
            ans += '1';
            carry = 0;
        }
        else if (xx % 10 == 0 && yy % 10 == 0 && carry == 0)
        {
            ans += '0';
            carry = 0;
        }
        xx = xx / 10;
        yy = yy / 10;
        minrun = minrun / 10;
    }
    int rem = max(xx, yy);
    while (rem > 0)
    {
        if (rem % 10 == 1 && carry == 1)
        {
            ans += '0';
            carry = 1;
        }
        else if (rem % 10 == 1 && carry == 0)
        {
            ans += '1';
            carry = 0;
        }
        else if (rem % 10 == 0 && carry == 1)
        {
            ans += '1';
            carry = 0;
        }
        else if (rem % 10 == 0 && carry == 0)
        {
            ans += '0';
            carry = 0;
        }
        rem = rem / 10;
    }
    if (carry == 1)
    {
        ans += '1';
    }
    string ansup = "";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        ansup += ans[i];
    }
    int binadd = stoi(ansup);
    cout << binadd << endl;

    return 0;
}