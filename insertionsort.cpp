#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[4] = {10, 12, 5, 2};
    for (int i = 1; i<4;i++)
    {
        int currentval = arr[i];
        int j = i-1;
        while (arr[j]> currentval && j >= 0)    
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=currentval;
        for (int i = 0; i<4; i++){cout<<arr[i]<<"  ";}
        cout<<endl;
    }
    // for (int i = 0; i<4; i++){cout<<arr[i]<<"  ";}
    return 0;
}

// 10 12 5 2
// 10 12 12 2
// 10 10 12 2
// 5 10 12 2

// 5 10 12 12
// 5 10 10 12
// 5 5 10 12
// 2 5 10 12



