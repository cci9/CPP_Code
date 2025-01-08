#include<iostream>
#include<cmath>
#include<string>

using namespace std;
class parent
{
    public:
    virtual void func()
    {
        cout<<"parent function"<<endl;
    }
};
class child : public parent
{
    public:
    void func()
    {
        cout<<"child function"<<endl;
    }
};

int main()
{
    parent *ptr;
    child obj;
    ptr = &obj;
    ptr -> func();
    return 0;
}