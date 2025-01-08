#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    string ctc ="Chetan";
    char ch = 'A';
    // cout<<static_cast<const void*>(&ctc)<<" "<<ctc<<endl;
    // cout<<&ctc<<" "<<ctc<<endl;
    // // cout<<&ch<<" "<<ch<<endl;
    // cout<<static_cast<const void*>(&ch)<<" "<<ch<<endl;

    const char* str = "hello";
    char st = 'A';
    cout <<&str<<endl;
    cout <<static_cast<const void*>(str)<<endl;
    cout <<static_cast<const void*>(&ch)<<endl;

    return 0;
}