#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Base{
    public:
    virtual void show ()
    {
        cout<<"This is base show function"<<endl;
    }
    void print()
    {
        cout<<"This is base print function"<<endl;
    }
    
};

class Derived : public Base{
    public:
     void show()
    {
        cout<<"This is derived show function"<<endl;
    }
    void print()
    {
           cout<<"This is derived print function"<<endl;
    }
    
};

int main()
{

    Base b;
    // b.print();
    // b.show();

    Derived d;
    // d.print();
    // d.show();

    Base *bptr;
    bptr = &b;
    bptr->print();
    bptr->show();

    
    return 0;
}