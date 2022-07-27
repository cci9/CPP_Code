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
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max && arr[i] > arr[i + 1] && i < n - 1)
        {
            max = arr[i];
            count++;
        }
        else if (arr[i] > max && i == n - 1)
        {
            max = arr[i];
            count++;
        }
    }
    cout << "Record braking days are " << count;

    return 0;
}