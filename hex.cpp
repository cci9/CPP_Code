#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int dec = 0;
    string hex;
    cout << "Enter your hexadecimal number\n";
    cin >> hex;
    for (int i = 0; i < hex.size(); i++)
    {
        if (isalpha(hex[i]))
        {
            int a = 10 + hex[i] - 'A';
            dec = dec + pow(16, hex.size() - 1 - i) * a;
        }
        else
        {
            int a = hex[i] - '0';
            dec = dec + pow(16, hex.size() - 1 - i) * a;
        }
    }
    cout << dec;
    return 0;
}