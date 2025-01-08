#include<iostream>
#include<cmath>
#include <regex>
#include<string>
#include <type_traits>

using namespace std;
class Function{
    public:
    void func(int x)
    {
        cout<<"x is a integer value "<<x<<endl;
    }

    void func(bool x)
    {
        cout<<"x is a boolean value "<<x<<endl;
    }

    void func(bool x, int y)
    {
        cout<<"x is a boolean value "<<x<<endl;
        cout<<"y is a integer value "<<y<<endl;
    }
};
int main()
{
    Function obj;
    obj.func(10);
    obj.func(true);
    obj.func(true, 30.25);
    return 0;
}