#include<iostream>
#include<cmath>
#include <random>
#include<string>

using namespace std;

class student
{
    string name;
    int age;
    bool gender;
    public:
    student()
    {
        cout<<"Default constructor"<<endl;
    }
    student(string n, int a, bool g)
    {
        cout<<"Parameterised constructor"<<endl;
        name = n;
        age = a;
        gender = g;
    }
    student(string n, int a)
    {
        cout<<"Parameterised constructor"<<endl;
        name = n;
        age = a;
    }
    student(student &obj)
    {
        cout<<"Copy constructor"<<endl;
        name = obj.name;
        age = obj.age;
        gender = obj.gender;
    }
    ~student()
    {
        cout<<"Destructor is common"<<endl;
    }
    void setGender(bool g)
    {
        gender = g;
    }
    void setInfo(string n, int a, bool g)
    {
        name = n;
        age = a;
        gender = g;
    }

    void getInfo()
    {
        cout<<"name is "<<name<< " age is "<<age<<" and gender is "<<gender<<endl;
    }
    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
};


int main()
{
    student chetan("Chetan", 23, false);
    student shyam("Shyam", 25);
    student ram;
    student gyan = chetan;
    // chetan.name ="Chetan";
    // chetan.age = 23;
    // chetan.gender = false;
    // chetan.setInfo("Chetan", 23, false);
    // gyan.getInfo();
    shyam.setGender(true);
    // shyam.getInfo();
    if (shyam==chetan)
    {
        cout<<"Both obj has same attribute values"<<endl;
    }
    else{
        cout<<"Both obj has not same attribute values"<<endl; 
    }
    return 0;
}