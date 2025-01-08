#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int a = 300;
    char A = a; // will create unknown data loss but no error
    cout<<a<<" " <<A<<endl;
    // char B{a}; // will show the copilation error of narrowing conversion
    // cout<<a<<" " <<B<<endl;
    char C = static_cast<char>(a); // this is the known and intensional narrowing conversion
    cout<<a<<" " <<C<<endl;

    float x= 3.14598;
    int y = x; // will create unknown data loss but no error
    cout<<x<<" " <<y<<endl;
    // int z{x}; // will show the compilation error of narrowing conversion
    // cout<<x<<" " <<z<<endl;
    int p = static_cast<int>(x); // this is the known and intensional narrowing conversion
    cout<<x<<" " <<p<<endl;


    float m = 0.0000000000000000000000000000000000000000000001;
    bool n = static_cast<bool>(m);
    cout<<n<<endl;
    return 0;
}