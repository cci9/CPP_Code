#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int decimaltobinary(int n)
{
    int ans = 0;
    int base = 1;
    while (base < n){base = base * 2;}
    base = base / 2;

    while (base > 0)
    {
        int lastdigit = n/base;
        n -= lastdigit * base;
        base = base / 2;
        ans = ans * 10 + lastdigit ;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the decimal value "<<endl;
    cin>>n;
    cout<<"Binary value is "<<decimaltobinary(n);
    return 0;
}
//decimal value 12
//binary value 1100