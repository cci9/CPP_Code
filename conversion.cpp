#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int decimaltobinary(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 2;
    x /= 2;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int decimaltooctal(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 8;
    x /= 8;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int hexadecimaltodecimal(string m)
{
    int ans = 0;
    int x = 1;
    int s = m.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (m[i] >= '0' && m[i] <= '9')
        {
            ans += x * (m[i] - '0');
        }
        else if (m[i] >= 'A' && m[i] <= 'F')
        {
            ans += x * (m[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
string decimaltohexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
        x *= 16;
    x /= 16;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;
        if (lastdigit <= 9)
            ans += to_string(lastdigit);
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n;
    string m;
    // cout << "Enter the binary number for conversion:" << endl;
    // cin >> n;
    // cout << "The coverted decimal value from binary is " << binarytodecimal(n) << endl;
    // cout << "The coverted decimal value from octal is " << octaltodecimal(n) << endl;
    // cout << "Enter the hexadecimal number for conversion:" << endl;
    // cin >> m;
    // cout << "The coverted decimal value from hexadecimal is " << hexadecimaltodecimal(m) << endl;
    // cout << "Enter the decimal number for binary conversion:" << endl;
    // cin >> n;
    // cout << "The coverted decimal value to binary is " << decimaltobinary(n) << endl;
    // cout << "Enter the decimal number for octal conversion:" << endl;
    // cin >> n;
    // cout << "The coverted decimal value to octal is " << decimaltooctal(n) << endl;
    cout << "Enter the decimal number for hexadecimal conversion:" << endl;
    cin >> n;
    cout << "The coverted decimal value to hexadecimal is " << decimaltohexadecimal(n) << endl;
    return 0;
}