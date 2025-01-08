#include<iostream>
#include<cmath>
#include <iterator>
#include<string>
#include<typeinfo>

using namespace std;

// Ex.1
/*
namespace global
{
int ram = 20;
}

int ram = 30;

int main()
{
    int ram = 10;
    cout<<"Local var = "<<ram<<endl;
    cout<<"Global var = "<<global::ram<<endl;
    cout<<"Global var = "<<::ram<<endl;
    return 0;
}
*/


// Ex.2
/*
namespace master
{
int ram = 20;
namespace child1 
{
    int ram = 50;
    namespace child2 
    { 
        int ram = 100;
    }
    }
}

int ram = 30;

int main()
{
    int ram = 10;
    cout<<"Local var = "<<ram<<endl;
    cout<<"Global var = "<<::ram<<endl;
    cout<<"Global var = "<<master::ram<<endl;
    cout<<"Global var = "<<master::child1::ram<<endl;
    cout<<"Global var = "<<master::child1::child2::ram<<endl;
    return 0;
}
*/

//Ex.3
/*
namespace master
{
int ram = 20;
namespace child1 
{
    int ram = 50;
    namespace child2 
    { 
        int ram = 100;
    }
    }
}

int ram = 30;

using namespace master;


int main()
{
    int ram = 10;
    cout<<"Local var = "<<ram<<endl;
    cout<<"Global var = "<<::ram<<endl;
    return 0;
}
*/

//Ex.4
/*
class Car
{
    private:

    string regnum;
    string name;
    string color;
    int stock;

    public:
    void set(string regnum, string name, string color, int stock)
    {
        this->regnum = regnum;
        this->name = name;
        this->color = color;
        this->stock = stock;
    }
    void set1(Car *this, string regnum, string name, string color, int stock)
    {
        this->regnum = regnum;
        this->name = name;
        this->color = color;
        this->stock = stock;
    }
    void show()
    {
        cout<<regnum<<name<<color<<stock<<endl;
    }

};

int main()
{
 
    Car ob;
    cout<<sizeof(ob)<<endl;
    ob.set("ABC", "Chetan", "RGB", 10);
    ob.show();
    return 0;
}
*/

//Ex.5
/*
class Student
{
    private:
    int marks[4];
    string name;
    string city;
    int total=0;
    public:
    void set(string name, string city, const int marks[])
    {
        this->marks[0] = marks[0];
        this->marks[1] = marks[1];
        this->marks[2] = marks[2];
        this->marks[3] = marks[3];
        this->name = name;
        this->city = city;
    }
    void find_total()
    {
        total = marks[0] + marks[1] + marks[2] + marks[3];
        cout<<"total marks for student is "<<total<<endl;
    }
    bool compare_total(const Student& args)
    {
        return this->total == args.total;

    }
    void show()
    {
        cout << "Student Name: " << name << endl;
        cout << "City: " << city << endl;
        cout << "Total Marks: " << total << endl;
    }

};
int main()
{
 
    int marks1[]={10,20,30,40};
    int marks2[]={50,60,70,80};
    Student st1;
    Student st2;
    st1.set("arun", "blr", marks1);
    st2.set("hari", "chn", marks2);
    st1.find_total();
    st2.find_total();
    if (st1.compare_total(st2))
    {
        st1.show();
    }
    else{
        st2.show();
    }
    return 0;
}
*/

//Ex.6
/*
class myarray{
  int *ptr;
  int size;
 public:
  myarray(){ size=5; ptr=new int[size]; }  // default ctor
 ~myarray(){ delete [] ptr; ptr=nullptr; }  // dtor
  myarray(int size){             // parameterized ctor
     this->size = size;
     ptr = new int[size];
  }
  void set() { for(int i=0;i<size;i++) ptr[i] = 0; }
  void incr(){ for(int i=0;i<size;i++) ptr[i] += 1; }
  void show(){ for(int i=0;i<size;i++) { cout<<ptr[i]<<" "; } cout<<"\n"; }
 myarray(myarray& args){
     // alias of dest "this"
     // alias of src  "args"
     if(typeid(this)==typeid(args)){
       this->size = args.size;
       this->ptr = new int[this->size];
       for(int i=0;i<this->size;i++)
         this->ptr[i] = args.ptr[i];
     }
 }
};
int main(){
  myarray src;
  src.set();
  src.incr();
  src.show();
  myarray dest = src;
  dest.show();

}
*/
//Ex.7
/*
#include<typeinfo>

#include<iostream>

using namespace std;





class myarray{

 int *ptr;

 int size;

 public:

 myarray(){ size=5; ptr=new int[size]; } // default ctor

 ~myarray(){ delete [] ptr; ptr=nullptr; } // dtor

 myarray(int size){       // parameterized ctor

   this->size = size;

   ptr = new int[size];

 }

 void set() { for(int i=0;i<size;i++) ptr[i] = 0; }

 void incr(){ for(int i=0;i<size;i++) ptr[i] += 1; }

 void show(){ for(int i=0;i<size;i++) { cout<<ptr[i]<<" "; } cout<<"\n"; }

 myarray(myarray& args){

   if(typeid(this)==typeid(args)){

    this->size = args.size;

    this->ptr = new int[this->size];

    for(int i=0;i<this->size;i++)

     this->ptr[i] = args.ptr[i];

  }

 }

 myarray(myarray&& args){

   this->size = args.size;

   args.size = 0;

   this->ptr= args.ptr;

   args.ptr = nullptr;

  }

};
int main(){

 myarray src;

 src.set();

 src.incr();

 src.show();

 myarray dest = std::move(src);

 dest.show();

 src.show();

}
*/
//Ex.8
/*
class Product
{
    int qnty;
    static int total;
    public:
    Product(int qnty)
    {
        this->qnty = qnty;
        this->total += qnty;
    }
    static void show()
    {
        cout<<total<<endl;
    }
};
int Product::total;
int main(){
  Product s1(10);
  Product s2(20);
  Product::show();
  return 0;

}
*/
//Ex.9
/*class Employee
{
    string a;
    string b;
    int salary;
    static int average_sal;
    static int count;
    public:
    // Employee(string x, string y, int z)
    // {
    //     this->a = x;
    //     this->b = y;
    //     this->salary = z;
    //     this->average_sal = average_sal + z;
    //     this->count = count +1;
    // }
    Employee(const string& x, const string& y, int z)
    {
        this->a = x;
        this->b = y;
        this->salary = z;
        this->average_sal = average_sal + z;
        this->count = count +1;
    }
    ~Employee(){
        this->average_sal = average_sal - salary;
        count = count -1 ; 
        // cout<<"Deleted"<<endl;   
    }
    static void avgsal()
    {
        cout<<"avg sal is "<<average_sal/count<<endl;
    }
};
int Employee::average_sal;
int Employee::count;
int main(){
  Employee e1("a", "b", 100);
  Employee e2("c", "d", 100);
  Employee e3("e", "f", 100);
  Employee::avgsal();
  Employee *e4 = new Employee("i", "j", 200);
  Employee::avgsal();
  delete e4;
  Employee::avgsal();
  return 0;
}
*/
//Ex.10
/*
class mytime
{
    int h, m;
    public:
    mytime(){};
    mytime(int h = 0, int m = 0){}
    void show()
    {
        cout<<h<<m<<endl;
    }
    mytime operator+(const mytime& args)
    {
        return mytime(this->h+args.h, this->m+args.m);
    }
};

int main(){
    mytime t1(10);
    mytime t2(1);
    mytime t3;
    t3 = t2 + t1;
    t1.show();
    t2.show();
    t3.show();
  return 0;
}
*/
//Ex.11
class mytime{
 private:
  int hours;
  int mins;
  int secs;
 public:
  mytime(int h=0,int m=0,int s=0):hours(h),mins(m),secs(s){ }
  void show() { cout<<hours<<" "<<mins<<" "<<secs<<endl; }
  mytime operator+(const mytime& args){
   return mytime(hours+args.hours, mins+args.mins, secs+args.secs);
  }
};

 int main(){
 mytime t1(10,20,30);
 mytime t2(1,2,3);
 mytime t3;
 t3 = t1 + t2;
 t1.show(); //hours=10 mins=20 secs=30
 t2.show(); //hours=1 mins=2 secs=3
 t3.show(); //hours=11 mins=22 secs=33
}


