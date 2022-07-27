#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements in array\n";
    cin >> n;
    cout << "Enter elements of array\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    const int max = 1e3 + 2;
    int idx[max];
    for (int i = 0; i < max; i++)
    {
        idx[i] = -1;
    }
    int minindex = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minindex = min(minindex, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minindex == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << minindex + 1;
    }

    return 0;
}