#include<iostream>
#include<cmath>
#include<string>
#include <chrono>

using namespace std;

int main()
{
    // Start measuring time
    auto start = std::chrono::high_resolution_clock::now(); 
    int arr[7]={'h', '-', '-', 'h', '-', '-', 'h'};
    int length = sizeof(arr) / sizeof(arr[0]);
    int ans[length]={0};
    for(int i=0;i<length;i++){cout<<char(arr[i])<<'\t';}
    cout<<endl;
    for(int i=0;i<length;i++)
    {
        if(arr[i]=='h'){ans[i]=1;}
    }
    for(int i=0;i<length;i++){cout<<ans[i]<<'\t';}
    cout<<endl;
    int i =1;
    int tankcount=0;
    while(i<length-1)
    {
        bool jump=false;
        if((ans[i]==0) && (ans[i+1]==1) && (ans[i-1]==1))
        {
            ans[i+1]=100;
            ans[i-1]=100;
            ans[i]=10;
            tankcount +=1;
            bool jump=true;
        }
        if (jump==true)
        {
            i=i+2;
        }
        else
        {
            i=i+1;
        }
    }

    i=0;
    while(i<length)
    {
        bool jump=false;
        if((ans[i]==0) && (ans[i+1]==1) && (i<length-1))
        {
            ans[i+1]=100;
            ans[i]=10;
            tankcount +=1;
            bool jump=true;
        }
        else if((ans[i]==0) && (ans[i-1]==1) && (i>0))
        {
            ans[i-1]=100;
            ans[i]=10;
            tankcount +=1;
            bool jump=true;
        }
        if (jump==true)
        {
            i=i+2;
        }
        else
        {
            i=i+1;
        }
    }

    for(int i=0;i<length;i++){cout<<ans[i]<<'\t';}
    cout<<endl;
    cout<<"Optimal number of tanks needed to feed all possible homes are "<<tankcount<<endl;
    int unservedhouses=0;
    for(int i =0; i<length;i++)
    {
        if(ans[i]==1)
        {
            unservedhouses+=1;
        }
    }
    cout<<"Number of houses will remain unserved "<<unservedhouses<<endl;

    // Stop measuring time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration in microseconds
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "Time taken: " << (duration/(float)1000) << " milliseconds" << std::endl;

    return 0;
}