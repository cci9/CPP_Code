#include<iostream>
#include<cmath>
#include<string>
#include <utility> // For std::forward

using namespace std;
/*
//Ex1
int main()
{
    int num=10;
    int& ref = num;
    int&& ref2 = 20;//work 
    int&& ref3 = num;//will error
    
    return 0;
}

//Ex2
void reffun(& ref1)
{
    cout<<&ref1<<" int&";
}
void reffun(&& ref1)
{
    cout<<&&ref1<<" int&&";
}

int main()
{
    int num=10;
    int& ref = num;
    int&& ref2 = 20;//work 
    fun(num);
    fun(ref);
    fun(forward<int&&>(ref2));

    return 0;
}

// Function for lvalue references
void reffun(int& ref1) {
    cout << "Lvalue reference: " << ref1 << endl;
}

// Function for rvalue references
void reffun(int&& ref1) {
    cout << "Rvalue reference: " << ref1 << endl;
}

int main() {
    int num = 10;
    int& ref = num;        // Lvalue reference
    int&& ref2 = 20;       // Rvalue reference

    // Test with an lvalue
    reffun(num);           // Calls lvalue version
    reffun(ref);           // Calls lvalue version

    // Test with an rvalue
    reffun(forward<int&&>(ref2)); // Calls rvalue version

    return 0;
}


//EX3
class sample
{
    
}; should work bcz defa con will be public
class sample
{
    sample(){cout<<"defailt ctor\n";}; //private constuctor
};
class sample
{
    ~sample(){cout<<"destrctor\n";}
    public:
    void dummydes{delete *this; cout<<"Dtorcalled\n";}
};
int main()
{
    // sample ob; //cannot call private constructor
    sample *ob1 = new sample();
    return 0;
}

//EX4
class sample
{
    void* operator new(size_t size){int* ptr; return ptr;}
};
int main()
{
    sample ob; //cannot call private constructor
    // sample *ob1 = new sample();
    return 0;
}

//EX5
class sample
{
    private:
    sample(const sample& args)= delete;
    sample& operator=(const sample& args)=delete;
    public:
    sample(){}
};
int main()
{
    sample ob; 
    // sample ob1 =ob;
    
    return 0;
}

class sample{
 private:
  sample(const sample& args){ }
  sample& operator=(const sample& args){ return *this;}
 public:
  sample(){ }
};

int main(){
 sample ob;
//  sample ob1 = ob;
}


//EX6
class sample
{
    private:
    sample(){}
    public:
    void show(){cout<<"show called\n";};
    static sample* create_heap(){return new sample();} //heap object
    static sample create_stack(){sample temp; return temp;}

};
int main()
{
    sample *ob2 = sample::create_heap();
    ob2->show();

    sample ob1 = sample::create_stack();
    ob1.show();

    return 0;
}

//EX7
class team
{
    string name = "alpha";
    string loc = "blr";
    int size = 10;
    public:
    void show()
    {
        cout<<name<<loc<<size<<endl;
    }
    int& operator[](int index)
    {
        return size;
    }
};
int main()
{
    team t1;
    t1.show();
    cout<<"team size "<<t1[5]<<endl;
    //any index should work. no dependancy on value, 
    //for [] syntax completion it is needed
    t1[0]=25;
    cout<<"team size "<<t1[0]<<endl;
    return 0;
}

//EX8
class sample
{
    int num = 10;
    public:
    // explicit sample(int args){return num;}//complete this
    void show(){cout<<"show "<<num<<endl;}
    operator int(){return num;}
};
int main()
{
    sample ob1;
    // sample ob3(20);//complete this
    sample ob2 = ob1;
    // int res = reinterpret_cast<int> (ob1); //will not work for user defined datatype
    int res = ob1;
    cout<<res<<endl;
    int a = 30;
    int c = a + res;
    cout<<c<<endl;
}

//EX9
class sample
{
    int num = 10;
    public:
    void show(){cout<<"show "<<num<<endl;}
    void operator ()(){show();}//() overloading
};
int main()
{
    sample ob1;
    ob1();
    return 0;
}

//EX10
class B; // forward references
class A
{
    int a =10;
    friend void add(const A& op1 , const B& op2);
    public:
    void show(){cout<<"A = "<<a<<endl;}
};
class B
{
    int b =20;
    friend void add(const A& op1 , const B& op2);
    public:
    void show(){cout<<"B = "<<b<<endl;}
};
void add(const A& op1 , const B& op2){
 int res = op1.a + op2.b;
 cout<<res;
}
int main(){
 A aob;
 B bob;
 add(aob,bob);
}

//EX10
// class B; // forward references
class A
{
    int a =10;
    friend class B;
    public:
    //  operator int(){return a;}
    void show(){cout<<"A = "<<a<<endl;}
    A add(const B& args)
    {
    A res;
    res.a = a + args.b;
    return res;
};
class B
{
    int b =20;
    friend void add(const A& op1 , const B& op2);
    friend class A;
    public:
    void show(){cout<<"B = "<<b<<endl;}
};
A A::add(const B& args)
{
    A res;
    res.a = a + args.b;
    return res;
}
int main(){
 A aob;
 B bob;
 A ans = aob.add(bob);
 ans.show();
}

class Beta;  // FORWARD REFERENCEs
class Alpha{
 int a=10;
 public:
 void show(){ cout<<"A = "<<a<<endl; }
 Alpha add(const Beta& args);
};

class Beta{
 int b=20;
 public:
 void show(){ cout<<"B = "<<b<<endl; }
 friend class Alpha;
};
Alpha Alpha::add(const Beta& args){
    Alpha res;
    res.a = a + args.b;
    return res;
}
int main(){
 Alpha aob;
 Beta bob;
 Alpha ans = aob.add(bob);
 ans.show();
}

// fix this
class Beta;  // FORWARD REFERENCEs
class Alpha{
 int a=10;
 public:
 friend class Beta;
 void show(){ cout<<"A = "<<a<<endl; }
 Alpha add(const Beta& args);
};

class Beta{
 int b=20;
 public:
 void show(){ cout<<"B = "<<b<<endl; }
 friend class Alpha;
 Beta add(const Alpha& args);
};
Alpha Alpha::add(const Beta& args){
    Alpha res;
    res.a = a + args.b;
    return res;
}
Beta Beta::add(const Alpha& args){
    Beta res;
    res.a = a + args.b; //fix this
    return res;
}
int main(){
 Alpha aob;
 Beta bob;
 Alpha ans = aob.add(bob);
 ans.show();
}

class sample
{
    int num=10;
    friend ostream& operator<<(ostream& args, const sample& sob);
    public:
};
ostream& operator<<(ostream& args, const sample& sob)
{
    args<<sob.num<<endl;
    return args;
}

int main()
{
    sample ob;
    sample ob1;
    sample ob2;
    cout<<ob<<ob1<<ob2;
    return 0;
}

//EX11
class Alpha
{
    int a;
    public:
    void fun2(){cout<<"Alpha fun 1"<<endl;}
};
class Beta : public Alpha
{
    int b;
    public:
    void fun1(){cout<<"Beta fun 1"<<endl;}
};
int main()
{
    cout<<sizeof(Alpha)<<endl;
    cout<<sizeof(Beta)<<endl;
    Beta o1;
    o1.fun1();
    o1.fun2();
    return 0;
}

//EX11
//fix this
class Employee
{
    string name;
    string dept;
    protected:
    int bassal;
    public:
    Employee();
    void set(string name, string dept, int bassal)
    {
        this->name = name;
        this->dept = dept;
        this->bassal = bassal;
    }
    void show()
    {
        cout<<name<<" "<<dept<<" "<<bassal<<endl;
    }
};
class softEng : public Employee
{
    private:
    string prjname;
    int pf;
    int netpay;
    public:
    void setvalue(string prjname)
    {
        pf = 0.01 * bassal;
        netpay = bassal - pf;
        this->prjname = prjname;
    }
    void showvalue()
    {
        cout<<"prj name is "<<prjname<<endl;
        cout<<"pf is "<<pf<<endl;
        cout<<"netpay is "<<netpay<<endl;
    }
};
int main()
{
    softEng ob;
    ob.set("arun", "benz", 65000);
    ob.show();
    ob.showvalue();
    return 0;
}

//EX12
class A
{
    public:
    int a=0;
    A(){cout<<"A Con called\n";}
    A(int a){cout<<"A Paara Con called\n";this->a=a;}
    A(const A& args){cout<<"A Copy Con called\n";this->a=args.a;}
    ~A(){cout<<"A Dest called\n";}
};
class B: public A
{
    public:
    int b=0;
    B(){cout<<"B Con called\n";}
    B(int b){cout<<"B Paara Con called\n";this->b=b;}
    B(const B& args){cout<<"B Copy Con called\n";this->b=args.b;}
    ~B(){cout<<"B Dest called\n";}
};
int main()
{
    // B ob;
    B ob1(5);
    ob1.a=10;
    ob1.b=20;
    cout<<"A "<<ob1.a<<" B "<<ob1.b<<endl;
    B ob2 = ob1;
    cout<<"A "<<ob1.a<<" B "<<ob1.b<<endl;
    return 0;
}

class Alpha{

   

 public:

  int a=0;

  Alpha()         { cout<<"Alpha Ctor called\n"; }

  Alpha(int a)      { cout<<"Alpha Para Ctor called\n"; this->a = a; }

  Alpha(const Alpha& args){ cout<<"Alpha Copy Ctor called\n"; this->a = args.a;}

  ~Alpha(){ cout<<"Alpha Dtor called\n"; }

};



class Beta : public Alpha{

  public:

  int b=0;

  Beta()        { cout<<"Beta Ctor called\n";   }

  Beta(int b):Alpha(0) { cout<<"Beta Para Ctor Called\n"; this->b = b;}

  Beta(const Beta& args):Alpha(args){ cout<<"Beta Copy Ctor called\n"; this->b = args.b;}

  ~Beta()        { cout<<"Beta Dtor called\n";   }

};



int main(){

 Beta ob1(20);

 ob1.a = 10;

 cout<<"A = "<<ob1.a<<" B = "<<ob1.b<<endl;

 

 Beta ob2 = ob1;

 cout<<"A = "<<ob2.a<<" B = "<<ob2.b<<endl;

}

//EX13
//Diamond ring ptoblem
class Alpha{
 public:
  Alpha()         { cout<<"Alpha Ctor called\n"; }
  ~Alpha(){ cout<<"Alpha Dtor called\n"; }
};
class Beta : virtual public Alpha{
  public:
  Beta()        { cout<<"Beta Ctor called\n";   }
  ~Beta()        { cout<<"Beta Dtor called\n";   }
};
class Delta: virtual public Alpha
{
    public:
    Delta()        { cout<<"Delta Ctor called\n";   }
  ~Delta()        { cout<<"Delta Dtor called\n";   }

};
class Omega: public Beta, public Delta
{
    public:
    Omega(){ cout<<"Omega Ctor called\n"; }
  ~Omega(){ cout<<"Omega Dtor called\n";   }

};
int main(){
Omega ob;
return 0;
}

//EX14
int main()
{
    float num=10;
    int *ptr;
    ptr = (int*)(&num);
    ptr = reinterpret_cast<int*>(&num);
    // ptr = static_cast<int*>(&num); find its use
    const int num1 = 10;
    int *ptr1;
    ptr1 = const_cast<int*>(&num1);
    return 0;
}

//EX15
class sample
{
    public:
    void fun1(){}; // address 100 // name mangling: fun1
    void fun1(int a){}; // address 150 // name mangling: fun1_i
    void fun1(int a, int b){}; // address 200 // name mangling: fun1_ii  
};
int main()
{
    sample ob; //address 1234
    ob.fun(5,6); //address 1234.200 this is called binding, already decided which address to call during compile time
}

//EX16
//nothing is overriden
class sample
{
    public:
    void fun1(){cout<<"fun1";} ;
    void fun2(){cout<<"fun2";}; 
 
};
class sample2 : public sample
{
    public:
    void fun3(){cout<<"fun3";}; 
};
int main()
{
    sample2 ob; 
    ob.fun1();
    ob.fun2();
    ob.fun3();
}

//method-overriding
class Alpha
{
    public:
    void fun1(){cout<<"fun1_alpha\n";} ;
    void fun2(){cout<<"fun2\n";}; 
 
};
class Beta : public Alpha
{
    public:
    void fun3(){cout<<"fun3\n";}; 
    void fun1(){cout<<"fun1_beta\n";}; 
};
int main()
{
    Beta ob; 
    ob.fun1();
    ob.fun2();
    ob.fun3();
}

//EX17
//object slicing
class Alpha
{
    public:
    int a=10;
    void show(){cout<<"A = "<<a<<endl;}; 
};
class Beta : public Alpha
{
    public:
    int b =50;
    void show(){cout<<"B = "<<b<<endl;}; 
};
int main()
{
    Beta ob; 
    ob.a=100;
    ob.b=500;
    cout<<ob.a<<" "<<ob.b<<endl;

    Alpha dest = ob; 
    //this is object slicing. ob is derived object so size will be 4+4 byte for a and
    //b but then dest of 4 byte size is assigned to 8 byte ob
    //that is the ob object slicing
    // cout<<dest.a<<endl;
}
*/
//solution: use base pointer
//base pointer can hold address of any derived class
class Alpha
{
    public:
    int a=10;
    void show(){cout<<"A = "<<a<<endl;}; 
};
class Beta : public Alpha
{
    public:
    int b =50;
    void show(){cout<<"B = "<<b<<endl;}; 
};
int main()
{
    Beta ob; 
    Beta *bptr = &ob;
    ob.a=100;
    ob.b=500;
    cout<<ob.a<<" "<<ob.b<<endl;

    Alpha *aptr = bptr; 
    cout<<aptr->a<<endl;
    // cout<<aptr->b<<endl;
}

    