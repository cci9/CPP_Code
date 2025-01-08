#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[4] = {10, 12, 5, 2};
    int i = 0;
    while (i < 4)
    {
        for (int j = 0; j < 4 -1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        i++;
    }
    for (int i = 0; i<4; i++){cout<<arr[i]<<"  ";}
    return 0;
}

// 12 10 5 2
// 10 5 2 12
// 5 2 10 12
// 2 5 10 12
