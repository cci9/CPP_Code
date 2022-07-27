#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
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
    cout << "enter key value to search its index:" << endl;
    int key;
    cin >> key;
    if (binarysearch(arr, n, key) == -1)
        cout << "The key valu does not exist in the array\n";
    else
        cout << "the index of key is:" << binarysearch(arr, n, key);
    return 0;
}