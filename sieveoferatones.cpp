#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void primeall(int n)
{
    int prime[100]={};
    for(int i = 2; i<=n;i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                prime[j]=1;
            }  
            // cout<<prime[i]<<" ";
        }
    }
    for(int i = 2; i<=n;i++)
    {
        if (prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
    //this will be print of non prime number indexes
    for(int i = 2; i<=n;i++)
    {
        if (prime[i]!=0)
        {
            cout<<prime[i]<<" ";
        }
    }cout<<endl;


}

int main()
{
    cout<<"Hey user please enter the number "<<endl;
    int n;
    cin>>n;
    primeall(n);
    
    return 0;
}