#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int arr[5]={'t', 't', 's', 't', 's'};
    int length = sizeof(arr) / sizeof(arr[0]);
    int ans[length]={0};
    for(int i=0;i<length;i++)
    {
        if(arr[i]=='s'){ans[i]=1;}
    }
    for(int i=0;i<length;i++){cout<<ans[i]<<'\t';}
    cout<<endl;
    int i =0;
    while(i<length)
    {
        bool jump=false;
        if((i==0) && (ans[i]==0) && (ans[i+1]==1)){ans[i+1]=10;}
        if((i==length-1) && (ans[i]==0) && (ans[i-1]==1)){ans[i-1]=10;}
        if((ans[i]==0) && (ans[i-1]==1)){ans[i-1]=10;}
        if((ans[i]==0) && (ans[i+1]==1))
        {
            ans[i+1]=10;
            bool jump=true;
        }
        if (jump==true){i=i+2;}
        else{i=i+1;}
    }
    for(int i=0;i<length;i++){cout<<ans[i]<<'\t';}
    cout<<endl;
    return 0;
}