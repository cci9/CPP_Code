#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int sum=5;
    int n=5;
    int arr[5]={1, 2, 2, 4, 5};
    int ansstartidx =-1;
    int ansendidx =-1;
    // cin>>sum;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    for (int i = 0; i < n-1; i++)
    {
        ansstartidx =i;
        if (arr[i]==sum)
        {
            ansendidx =i;
            break;
        }
        int subarrsum = arr[i];
        int j = i+1;
        while (j < n)
        {
            subarrsum += arr[j];
            if (subarrsum == sum)
            {
                ansendidx =j;
                break;
            }
            else if (subarrsum > sum)
            {
                break;
            }
            else
            {
                j++;
            }
        }  
    }
    if (ansendidx != -1)
    {
        cout<<"Subarray found on indexes from "<<ansstartidx<<" to "<<ansendidx<<" for sum equal to "<<sum;
    }
    else
    {
        cout<<"No subarray found of sum equal to "<<sum<<endl;
        cout<<ansstartidx<<" "<<ansendidx;
    }
    
    return 0;
}