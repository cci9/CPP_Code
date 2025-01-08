#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[6] = {10, 12, 1, 1, 45, 2};
    for (int i = 0; i < 6-1; i++)
    {
        for (int j = i +1; j < 6; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i<6; i++){cout<<arr[i]<<"  ";}


    return 0;
}