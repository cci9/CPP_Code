#include<iostream>
#include<cmath>
#include <random>
#include<string>

using namespace std;
class student
{
    int static count;
    // friend void getvalue();
    void getvalue();
    public:
    string nam;
    // friend void getvalue();
    void setdata(string name)
    {
        nam = name;
        count++;
    }
    void getdata()
    {
        cout<<"Student name is "<<nam<<" count is "<<count<<endl;
    }
    void static getcount()
    {
        cout<<"Number of students are "<<count<<endl;
    }
};
int student::count=1000;
void getvalue(student obj)
{
    cout<<"Name is "<<obj.nam<<endl;
}

int main()
{
    student chetan;
    chetan.setdata("Chetan");
    // chetan.getdata();
    getvalue(chetan);
    // student ram;
    // ram.setdata("Ram");
    // ram.getdata();
    // student lak;
    // lak.setdata("Lak");
    // lak.getdata();
    return 0;
}