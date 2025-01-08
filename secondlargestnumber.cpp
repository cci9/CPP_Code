#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++){cin>>arr[i];}
    for (int i = 0; i < 5; i++){cout<<arr[i]<<"\t";}
    cout<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j] >  arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Second largest number is "<<arr[1];
    return 0;
}