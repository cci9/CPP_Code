#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int getbit(int x, int y)
{
    return ((x & (1 << y)) != 0);
}

int setbit(int x, int y)
{
    return (x | (1 << y));
}

int unsetbit(int x, int y)
{
    return (x & ~(1 << y));
}

int exchangebit(int x, int y)
{
    if ((x & (1 << y)) != 0)
    {
        return (x & ~(1 << y));
    }
    else
    {
        return (x | (1 << y));
    }
}

int updatebit_1(int x, int y, int value)
{
    int mask = ~(1<<y);
    x = x & mask;
    return (x | (value << y));
}

int main()
{
    // cout<<getbit(5,2)<<endl;
    // //101 & 1<<2 == 1

    // cout<<getbit(12,1)<<endl;
    // //1100 & 1<<1 == 0

    // cout<<getbit(12,3)<<endl;
    // //1100 & 1<<3 == 0

    // cout<<setbit(12,1)<<endl;
    // //1100 | 1<<1 == 1110

    // cout<<unsetbit(12,2)<<endl;
    // //1100 & !(1<<2) == 1000

    // cout<<exchangebit(12,1)<<endl;
    // //1100 == 1110

    // cout<<exchangebit(12,2)<<endl;
    // //1100 == 1000

    cout<<updatebit_1(5, 1, 1)<<endl;
    //101 == 111

    cout<<updatebit_1(5, 1, 0)<<endl;
    //101 == 101

    cout<<updatebit_1(5, 0, 0)<<endl;
    //101 == 100

    cout<<updatebit_1(5, 0, 1)<<endl;
    //101 == 101

    return 0;
}