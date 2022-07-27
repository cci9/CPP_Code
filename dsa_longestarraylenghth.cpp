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
    /* //Approach one - own logic
    int maxlength = 0;
    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 2;
        int prevdiff = arr[i + 1] - arr[i];
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j + 1] - arr[j] == prevdiff)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count > maxlength)
        {
            maxlength = count;
            index = i;
        }
    }
    cout << "Max length of array of same difference of conscutive elemnt is " << maxlength << endl;
    cout << "The elements are \n";
    for (int i = index; i < index + maxlength; i++)
    {
        cout << arr[i] << "\t";
    }
    */
    // Logic two from video
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (arr[j] - arr[j - 1] == pd)
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            ans = max(ans, curr);
            curr = 2;
        }
        j++;
    }
    cout << "Max length of array of same difference of conscutive elemnt is " << ans << endl;

    return 0;
}