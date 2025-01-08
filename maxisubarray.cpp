#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[7] = {10, 7, 4, 6, 8, 10, 11};
    int maxsubarrlength = 2;
    int diff = arr[1]-arr[0];
    int ans = 2;
    int j = 2;
    while (j<7) 
    {
        if (arr[j]-arr[j-1] == diff){maxsubarrlength++;}
        else{maxsubarrlength = 2;
        diff = arr[j]-arr[j-1];}
        ans = max(ans, maxsubarrlength);
        j++;
    }
    cout<<"Max length of sub array "<<ans;
    
    return 0;
}