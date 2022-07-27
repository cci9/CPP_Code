#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter array to find the max of it\n";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxval = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxval = max(maxval, arr[i]);
    }
    cout << "The max val fom array is " << maxval;

    return 0;
}