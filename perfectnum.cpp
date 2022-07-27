#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to find perfect number till there\n";
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        int perfect = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                perfect += j;
            }
        }
        if (i == perfect)
        {
            cout << i << "\t";
        }
        }
    return 0;
}