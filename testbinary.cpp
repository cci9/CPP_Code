#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int x = 111;
    int y = 111;
    int xx = x;
    int yy = y;

    int minrun = min(xx, yy);
    string ans = "";
    bool carry = 0;
    while (minrun > 0)
    {
        // Both approaches are correct ...this is a reference from full adder truth table
        // and boolean expressions.
        /*
        ans += to_string((!(xx % 10 == 1) && !(yy % 10 == 1) && carry) ||
                         (!(xx % 10 == 1) && (yy % 10 == 1) && !carry) ||
                         ((xx % 10 == 1) && !(yy % 10 == 1) && !carry) ||
                         ((xx % 10 == 1) && (yy % 10 == 1) && carry));
        carry = (!(xx % 10 == 1) && (yy % 10 == 1) && carry) ||
                ((xx % 10 == 1) && !(yy % 10 == 1) && carry) ||
                ((xx % 10 == 1) && (yy % 10 == 1) && !carry) ||
                ((xx % 10 == 1) && (yy % 10 == 1) && carry);
        */
        ans += to_string(((xx % 10 == 1) ^ (yy % 10 == 1) ^ carry));
        carry = ((xx % 10 == 1) && (yy % 10 == 1)) ||
                ((yy % 10 == 1) && carry) ||
                ((xx % 10 == 1) && carry);
        xx = xx / 10;
        yy = yy / 10;
        minrun = minrun / 10;
    }
    int rem = max(xx, yy);
    while (rem > 0)
    {
        ans += to_string(rem % 10 == 1 ^ carry);
        carry = (rem % 10 == 1) && carry;
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