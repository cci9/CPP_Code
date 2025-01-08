#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int n = 8;
    int arr[8] = {1, 2, 0, 7, 2, 0, 2, 2};
    int count = 0;
    int max = arr[0];
    int j = 0;
    while (j<n) 
    {
        if ((j == 0) && (arr[j]> arr[j+1]))
        {
            count++;
        }
        else if((j<n-2) && (max<arr[j]) && (arr[j]>arr[j+1]))
        {
            count++;
            max = arr[j];
        }
        else
        {
            if (arr[j]>max)
            {
                count++;
            }
        }
        j++;
    }
    cout<<"Record breaking days "<<count;
    return 0;
}