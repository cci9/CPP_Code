#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n + sum(n-1);
}

int power(int n, int p)
{
    if (p==0)
    {
        return 1;
    }
    return n  * power(n, p-1);
}

int factorial(int n)
{
    int sum = 0;
    if (n==0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return sum + factorial(n-1) + factorial(n-2);
}

bool sorted(int arr[], int n)
{
    if (n==1){return true;}
    bool restArray = sorted(arr+1, n-1);
    return (restArray && arr[0]<arr[1]);
}
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout<<n<<"\t";
    dec(n-1);
}
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n-1);
    cout<<n<<"\t";

}
int firstocc(int arr[], int n, int key, int i)
{
    if (i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr, n, key, i+1);
}
int lastocc(int arr[], int n, int key, int i)
{
    if (i==n)
    {
        return -1;
    }
    int restArray = lastocc(arr, n, key, i+1);
    if (restArray != -1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    // int n =7;
    // cout<<"sum till n =20 is "<<sum(n)<<endl;
    // cout<<"power of n = four times is "<<power(n, 4)<<endl;
    // cout<<"factorial "<<factorial(n)<<endl;
    // int arr[4] = {10, 2, 3, 4};
    // int n = 4;
    // cout<<sorted(arr, n);
    // int n = 4;
    // inc(n);
    int arr[7] = {10, 2, 3, 4, 2,5, 3};
    cout<<firstocc(arr, 7,3,0)<<endl;
    cout<<lastocc(arr, 7,2,0)<<endl;
    return 0;
}