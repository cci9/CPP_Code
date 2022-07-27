#include <iostream>
#include <string>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int count1(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

int main()
{
    int n = 5;
    // cout << ispowerof2(n) << endl;
    cout << count1(n) << endl;
    return 0;
}