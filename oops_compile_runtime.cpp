#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int x = 10;
    cout<<x<<endl;

    // compile time error - syntax or semantic
    // int y = 20;
    // cot<<x<<endl;

    // run time error - zero by divison
    int z = 30;
    int p = 0;
    cout<<(z/p)<<endl;
    return 0;
}