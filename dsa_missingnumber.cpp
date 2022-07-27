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
    int N = 10e3 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            idx[arr[i]] = arr[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (idx[i] == -1)
        {
            cout << "Smallest missing positive number is " << i;
            break;
        }
    }

    return 0;
}