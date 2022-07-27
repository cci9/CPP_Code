#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter array element in sorted:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) // 12      23      45      51      19      8
    {
        int current = arr[i]; // current=19 i =4
        int j = i - 1;        // j=3
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j]; // 12      23      19      45      51      8
            j--;                 // j=1
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}