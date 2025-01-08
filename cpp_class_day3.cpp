#include<iostream>
#include<cmath>
#include <iterator>
#include<string>
#include<typeinfo>
#include<vector>
#include<algorithm>

using namespace std;
/*
//EX1
class Alpha
{
    public:
        virtual void fun1(){cout<<"fun1 of alpha called\n";}
        void fun2(){cout<<"fun2 of alpha called\n";}
};
class Beta : public Alpha
{
    public:
        void fun1(){cout<<"fun1 of beta called\n";}
        void fun3(){cout<<"fun3 of beta called\n";}
};
int main()
{
    Alpha *ptr;
    ptr = new Beta();
    ptr->fun1();//base pointer can call nonvirtual base class func
    ptr->fun2();//base pointer can call virtual base class func
    // ptr->fun3();//base pointer cannot call nonvirtual derived class func

    // make this happen
    //create a derived class pointer 
    // copy the base pointer to derived calss pointer
    //invoke the non-virtual method of derived class
    Beta *bptr=nullptr;
    bptr = reinterpret_cast<Beta*>(ptr);
    bptr->fun3();
}

//why downcasting is unsafe
//EX2
class Alpha
{
    public:
        virtual void fun1(){cout<<"fun1 of alpha called\n";}
        void fun2(){cout<<"fun2 of alpha called\n";}
};
class Beta : public Alpha
{
    public:
        void fun1(){cout<<"fun1 of beta called\n";}
        void fun3(){cout<<"fun3 of beta called\n";}
};
class Hacker : public Alpha
{
    public:
        void fun3(){cout<<"fun3 of hacker called\n";}
};

int main()
{
    Alpha *ptr;
    ptr = new Beta();
    ptr->fun1();//base pointer can call nonvirtual base class func
    ptr->fun2();//base pointer can call virtual base class func
    // ptr->fun3();//base pointer cannot call nonvirtual derived class func

    // make this happen
    //create a derived class pointer 
    // copy the base pointer to derived calss pointer
    //invoke the non-virtual method of derived class
    Beta *bptr=nullptr;
    bptr = reinterpret_cast<Beta*>(ptr);
    bptr->fun3();
    // safe casting for derived class 
    Beta *bbptr = dynamic_cast<Beta*>(ptr);
    if(bbptr == nullptr){cout<<"Failed\n";}//this is compulsory for dynamic cast, safe downcasting
    else{bbptr->fun3();}    

    //what is wrong here, hacker is not derived class, still can access base pointer
    // Hacker *hptr = new Hacker();
    Hacker *hptr = reinterpret_cast<Hacker*>(ptr);// wrong approach
    hptr->fun3();

    //use dynamic casting
    Hacker *hhptr = dynamic_cast<Hacker*>(ptr);
    if(hhptr == nullptr){cout<<"Failed\n";}//this is compulsory for dynamic cast, safe downcasting
    else{hhptr->fun3();}
    return 0;
}

//EX3
class Alpha
{
    public:
        virtual void fun1(){cout<<"fun1 of alpha called\n";}
        void fun2(){cout<<"fun2 of alpha called\n";}
};
class Beta : public Alpha
{
    public:
        void fun1(){cout<<"fun1 of beta called\n";}
        void fun3(){cout<<"fun3 of beta called\n";}
};
class Delta : public Beta
{
    public:
        void fun1(){cout<<"fun1 of delta called\n";}
        void fun4(){cout<<"fun4 of delta called\n";}
};

int main()
{
    vector<Alpha*> vob={new Alpha(), new Beta(), new Delta()};
    // vector<Alpha*> vob;
    // vob.push_back(new Alpha());
    // vob.push_back(new Beta());
    // vob.push_back(new Delta());
    for(auto ptr:vob)
    {
        ptr->fun1();
        ptr->fun2();
        if(typeid(*ptr)==typeid(Beta))
        {
            Beta *bptr = dynamic_cast<Beta*>(ptr);
            if(bptr == nullptr)
                {cout<<"Failed\n";}
            else
                {bptr->fun3();}
        }
        else if(typeid(*ptr)==typeid(Delta))
        {
            Delta *dptr = dynamic_cast<Delta*>(ptr);
            if(dptr == nullptr)
                {cout<<"Failed\n";}
            else
                {dptr->fun4();}
        }
        cout<<endl;
    }
    return 0;
}

//EX4
//ABC
class Alpha
{
    public:
        virtual void fun1()=0;
        void fun2(){cout<<"fun2 of alpha called\n";}
};
class Beta : public Alpha
{
    public:
        // void fun1(){cout<<"fun1 of beta called\n";}
        void fun3(){cout<<"fun3 of beta called\n";}
};
class Delta : public Beta
{
    public:
        void fun1(){cout<<"fun1 of delta called\n";}
        void fun4(){cout<<"fun4 of delta called\n";}
};
int main()
{
    Alpha *ptr;
    ptr = new Alpha(); //pure virtual function error
    ptr = new Beta(); //pure virtual function error
    return 0;
}

//EX5
class Alpha
{
    public:
        virtual void fun1()=0;
        void fun2(){cout<<"fun2 of alpha called\n";}
};
class Beta : public Alpha
{
    public:
        void fun1(){cout<<"fun1 of beta called\n";}
        void fun3(){cout<<"fun3 of beta called\n";}
};
int main()
{
    Alpha *ptr;
    ptr = new Beta();
    ptr->fun1();
    ptr->fun2();
    return 0;
}

//EX6
//HAS-A relationship 
//smart pointers

class employee
{
    private:
    int id;
    string name;
    public:
    employee(){cout<<"ctor called\n";}
    ~employee(){cout<<"dtor called\n";}
    void set(int i, string j){id = i;name = j;}
    void show(){cout<<"id is "<<id<<" name is "<<name<<endl;}
};
class another
{
    employee *eptr;
    public:
    another(employee *arg){eptr = arg;}
    ~another(){delete eptr;}
    employee* operator->(){return eptr;}
};
int main()
{
    // employee ctc;
    // ctc.set(5, "ctc");
    // ctc.show();
    another ptr(new employee());
    ptr->set(5, "ctc");
    ptr->show();
    return 0;
}

constexpr int check(int num)
{
    int a= 6;
    if(num%2==0){return num*a;}
    else{return num/a;}
}  
auto square = [](int x){return x*x;};
int main()
{
    int arr[]={10,20,30};
    transform(begin(arr), end(arr), begin(arr), [](int x){return x+1;});
    cout<<check(5);
}

//EX6
//same data type
template <class T>
void add(T a, T b){T c = a+b;cout<<c<<endl;}
int main()
{
    int a = 5, b = 10;
    add(a, b);
    double x = 5, y = 10;
    add(x, y);
    string q ="hello", p="world";
    add(p,q);
    //here three template instantiation created
}

//EX7
//mix data type
template <class T1, class T2>
void add(T1 a, T2 b){auto c = a+b;cout<<c<<endl;}
int main()
{
    int a = 5, b = 10;
    add(a, b);
    double x = 5, y = 10.60;
    add(x, y);
    string q ="hello", p="world";
    add(p,q);
    //here three template instantiation created
}

//EX8
class Emp{
  string name;
  string loc;
 public:
  Emp(string a="None", string b="None"):name(a),loc(b){ }
  void set(string a="None", string b="None"){ name=a; loc=b; }
  void show(){ cout<<name<<" "<<loc<<endl; }
  string getname(){ return name; }
};
template <class T, class CMP>
void sort(T arr[], int size,CMP compare){
 T temp;
 for(int i=0;i<size;i++){
 for(int j=i+1;j<size;j++){
  if(compare(arr[i],arr[j])){
   temp = arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
  }
 }
}
int main(){
  int a[] = {50,30,40,25,10,20};
  sort(a,6,[](int a, int b){ return a>b;});
  for(auto i:a)
    cout<<i<<" ";
  cout<<endl;
  float b[] = {4.5, 2.5, 1.5, 5.5, 3.5, 2.0 };
  sort(b,6,[](float a, float b){ return a>b;});
  for(auto i:b)
    cout<<i<<" ";
  cout<<endl;
  string c[] = {"chn","blr", "del", "mum", "tpur", "hyd" };
  sort(c,6,[](string a, string b){ return a>b;});
  for(auto i:c)
    cout<<i<<" ";
  cout<<endl;
  Emp d[3];
  d[0].set("hari","del");
  d[1].set("john","mum");
  d[2].set("arun","blr");
  sort(d,3,[](Emp a, Emp b){ return a.getname()>b.getname();});
  for( auto i:d)
    i.show();
}

//EX9
template <typename T>
class Sample{
 private:
  T mem1;
  T mem2;
 public:
  void set(T a, T b){mem1=a; mem2=b; }
  void out()    {cout<<"MEM1= "<<mem1<<" MEM2= "<<mem2<<endl; }
};
int main(){
 Sample<int> ob1;
 ob1.set(10,20);
 ob1.out();
}

//EX10
template <class T,int size>
class myarray{
 private:
  T *ptr=nullptr;
 public:
  myarray(){ ptr=new T[size]; }
  ~myarray(){ delete[] ptr;  }
  void set() { for(int i=0;i<size;i++) ptr[i] = 0;    } 
  void show(){ for(int i=0;i<size;i++) cout<<ptr[i]<<" "; cout<<endl; }
};
int main(){
 myarray<int,5> ob;
 ob.set();
 ob.show();
 myarray<int,2> ob1;
 ob1.set();
 ob1.show();
}

//EX11
int main(){
 vector<int> vob;
 cout<<"SIZE = "<<vob.size()<<endl;
 cout<<"CAP = "<<vob.capacity()<<endl;
 vob.push_back(20);
 vob.push_back(40);
 vob.push_back(50);
 vob.push_back(30);
 vob.push_back(60);
 vob.push_back(10);
 sort(vob.begin(), vob.end());
 vob.pop_back();
 for(int i=0;i<vob.size();i++)
  cout<<vob[i]<<" ";
 cout<<endl;
 vector<int>::iterator it;
 for(it=vob.begin(); it!=vob.end(); ++it)
  cout<<(*it)<<" ";
 cout<<endl;
 vector<int>::reverse_iterator it1;
 for(it1=vob.rbegin(); it1!=vob.rend(); ++it1)
  cout<<(*it1)<<" ";
 cout<<endl;
}

//EX13
#include<map>
int main()
{
 map<string,int> months;
 months["jan"] = 1;
 months["feb"] = 2;
 months["mar"] = 3;
 months["apr"] = 4;
 months["may"] = 5;
 string temp;
 cout<<"Enter a month : ";
 cin>>temp;
 auto res = map.find(temp);
 if(res!=end(months))
  cout<<"FOUND = "<<months[temp]<<endl;
 else
  cout<<"NOT FOUND\n";
}

//fix this
int main() {
    int data1[] = {10, 50, 30, 60};
    int data2[] = {20, 40, 65, 55};
    size_t size1 = sizeof(data1) / sizeof(data1[0]);
    size_t size2 = sizeof(data2) / sizeof(data2[0]);
    vector<int> v1(data1, data1+size1);
    vector<int> v2(data2, data1+size2);
    vector<int> v3;
    v3.insert(v3.begin(), v1.begin(), v1.end());
    v3.insert(v3.end(), v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    for (int num : v3) {
        cout << num << " "<<endl;
    }
    return 0;
}
*/
//EX10
int main(){
  int data1[] = {10,50,30,60};
  int data2[] = {20,40,65,55};
  vector<int> vob1(data1, data1+4);
  vector<int> vob2(data2,data2+4);
  vector<int> vob3;
  vob3.insert(vob3.begin(),vob1.begin(),vob1.end());
  vob3.insert(vob3.end(),vob2.begin(), vob2.end());
  sort(begin(vob3),end(vob3));
  for(auto i:vob3) cout<<i<<" "; cout<<endl;
//   transform(begin(vob3),end(vob3),begin(vob3), [](int x){ return x+1;});
//   for(auto i:vob3) cout<<i<<" "; cout<<endl;
//   vector<int> temp(8);
//   copy_if(begin(vob3),end(vob3),begin(temp),[](int x){ if(x>=50) return true; else return false;});
//   for(auto i:temp) cout<<i<<" "; cout<<endl;
}
