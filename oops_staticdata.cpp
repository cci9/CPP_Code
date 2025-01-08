#include<iostream>
#include<cmath>
#include <random>
#include<string>

using namespace std;
class student
{
    string nam;
    int static count;
    public:
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

int main()
{
    student chetan;
    chetan.setdata("Chetan");
    chetan.getdata();
    student.getco
    student ram;
    ram.setdata("Ram");
    ram.getdata();
    student lak;
    lak.setdata("Lak");
    lak.getdata();
    return 0;
}