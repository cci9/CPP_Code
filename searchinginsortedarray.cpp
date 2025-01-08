#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 7;
    int i = 0;
    int j = 10;
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(arr[mid]==search)
        {
            cout<<"index "<<mid;
            break;
        }
        else if(arr[mid]<search){i = mid+1;}
        else{j = mid-1;}
    }
    return 0;
}