#include <iostream>
#include <string>
#include <cmath>
#include <string>
using namespace std;

int binarytodecimal(int val)
{
    int sum = 0, inc = 0;
    int base = 2;
    while (val > 0)
    {
        sum = sum + pow(base, inc) * (val % 10);
        val = val / 10;
        inc += 1;
    }
    return sum;
}

int decimaltobinary(int val)
{
    int x = 1, ans = 0;
    while (x <= val)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastdigit = val / x;
        val -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

int octaltodecimal(int val)
{
    int sum = 0, inc = 0;
    int base = 8;
    while (val > 0)
    {
        sum = sum + pow(base, inc) * (val % 10);
        val = val / 10;
        inc += 1;
    }
    return sum;
}

int decimaltooctal(int val)
{
    int x = 1, ans = 0;
    while (x <= val)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastdigit = val / x;
        val -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

int hexadecimaltodecimal(string val)
{
    int sum = 0;
    int base = 16;
    for (int i = 0; i < val.size(); i++)
    {
        if (val[i] >= '0' && val[i] <= '9')
        {
            sum = sum + (val[i] - '0') * pow(base, val.size() - i - 1);
        }
        else if (val[i] >= 'A' && val[i] <= 'F')
        {
            sum = sum + (val[i] - 'A' + 10) * pow(base, val.size() - i - 1);
        }
    }
    return sum;
}

string decimaltohexadecimal(int val)
{
    int x = 1;
    string ans = "";
    while (x <= val)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastdigit = val / x;
        val -= lastdigit * x;
        x /= 16;
        if (lastdigit < 10)
        {
            ans = ans + to_string(lastdigit);
        }
        else
        {
            char a = 'A' + lastdigit - 10;
            ans = ans + a;
        }
    }
    return ans;
}

int main()
{
    /*
    int num;
    cout << "Enter a number to covert from binary/octal to decimal\n";
    cin >> num;
    cout << "Binary value is: " << num << " converted to decimal is: " << binarytodecimal(num) << endl;
    cout << "Octal value is: " << num << " converted to decimal is: " << octaltodecimal(num) << endl;
    */
    string num;
    cout << "Enter a string to covert from hexadecimal to decimal\n";
    cin >> num;
    cout << "Hexadecimal value is: " << num << " converted to decimal is: " << hexadecimaltodecimal(num) << endl;
    /*
    int num;
    cout << "Enter a number to covert from decimal to binary/octal/hexadecimal\n";
    cin >> num;
    cout << "decimal value is: " << num << " converted to binary is: " << decimaltobinary(num) << endl;
    cout << "decimal value is: " << num << " converted to octal is: " << decimaltooctal(num) << endl;
    cout << "decimal value is: " << num << " converted to hexadecimal is: " << decimaltohexadecimal(num) << endl;
    */
    return 0;
}