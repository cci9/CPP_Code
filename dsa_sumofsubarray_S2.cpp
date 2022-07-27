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

    int i = 0, j = 0, st = -1, end = -1, sum = 0;
    while (j < n && sum + arr[j] <= S)
    {
        sum += arr[j];
        iter++;
        j++;
    }
    if (sum == S)
    {
        cout << i << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        while (sum > S)
        {
            sum -= arr[i];
            i++;
            iter++;
        }
        if (sum == S)
        {
            st = i;
            end = j;
            break;
        }
        j++;
    }

    cout << st << " " << end << endl;
    cout << "Total iterations " << iter;
    return 0;
}
