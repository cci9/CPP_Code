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
    int S;
    cout << "Enter the number to find subarray sum equal to this\n";
    cin >> S;
    int iter = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            iter++;
            if (sum == S)
            {
                cout << "Start index is " << i << " End index is " << j << endl;
                break;
            }
        }
        if (sum == S)
        {
            break;
        }
    }
    cout << "Total iterations " << iter;
    return 0;
}