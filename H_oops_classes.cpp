#include<iostream>
#include<cmath>
#include <stdlib.h>
#include <string>

using namespace std;

class employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);
        void getdata()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
void employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

class test
{
    string number;
public:
    void read();
    void check();
};
void test :: read()
{
    cout<<"enter binary name"<<endl;
    cin>>number;

}
void test :: check()
{
    for (int i=0; i<number.length(); i++) 
    {
        if (number.at(i)!='0' && number.at(i)!='1') 
        {
            cout<<"The entered number is not an binary number"<<endl;
            exit(0);
        }
    }
    cout<<"The entered number is an binary number"<<endl;
}

int main()
{
    employee chetan;
    chetan.d = 100;
    chetan.e = 200;
    chetan.setdata(10, 20, 30);
    chetan.getdata();

    test chetu;
    chetu.read();
    chetu.check();
    return 0;
}