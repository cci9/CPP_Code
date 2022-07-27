#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n -= 1;
    }
    return fact;
}

int main()
{
    cout << "Enter array to find the max of it\n";
    int n;
    cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "Number of subarray will be " << factorial(n) / (factorial(2) * factorial(n - 2)) + n;

    return 0;
}