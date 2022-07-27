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
    int sum = 0;
    int maxsum = 0;
    int maxval = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxval = max(maxval, arr[i]);
        if (arr[i] >= 0)
        {

            sum += arr[i];
        }
        else
        {
            maxsum = max(maxsum, sum);
            sum = 0;
        }
    }
    maxsum = max(maxsum, sum);
    if (maxsum == 0)
    {
        cout << "This is called as Kandane's Alorithm. The max sum of subarray is " << maxval;
    }
    else
    {
        cout << "This is called as Kandane's Alorithm. The max sum of subarray is " << maxsum;
    }

    return 0;
}