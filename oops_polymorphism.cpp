#include<iostream>
#include<cmath>
#include<string>
#include <type_traits>

using namespace std;

//Function overloading class
class PolyFunc
{
    public:
    int funcoverloading(int x){
        // cout<<"Function of single integer "<<endl;
        return x;
    }
    float funcoverloading(float x){
        // cout<<"Function of single float "<<endl;
        return x;
    }
    int funcoverloading(int x, int y){
        // cout<<"Function of double integer "<<endl;
        return x*y;
    }
};
// int main()
// {
//     PolyFunc obj;    
//     int x = 10;
//     cout<<"Function of single integer "<<obj.funcoverloading(x)<<endl;
//     float y =10.20;
//     cout<<"Function of single float "<<obj.funcoverloading(y)<<endl;
//     int z =10;
//     cout<<"Function of double integer "<<obj.funcoverloading(x, z)<<endl;
//     return 0;
// }

//Operator overloading class
class Complex{
    private: 
    int real, imag;
    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const& obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print(){cout<<real<<" + "<<imag<<"i"<<endl;} 
};
// int main()
// {
//     Complex c1(10, 5), c2(2,4);
//     Complex c3 = c1 + c2;
//     c3.print();
//     int x = 10;
//     return 0;
// }

// Function overriding class
class A
{
    public:
    virtual void print()
    {
        cout<<"I bring from class A"<<endl;
    }
};
class B: public A
{
    public:
    void print()
    {
        cout<<"I bring from class B"<<endl;
    }
};
//  base class declaration.
class Animal {
public:
    string color = "Black";
};
 
// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};

class Base
{
    public:
    virtual void display()
    {
        cout<<"Base class virtual function"<<endl;
    }
    void print()
    {
        cout<<"Base class print function"<<endl;
    }
};
class Child: public Base
{
    public:
    void display()
    {
        cout<<"Child class function"<<endl;
    }
    void print()
    {
        cout<<"Child class print function"<<endl;
    }
};

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show() { cout << "show base class" << endl; }
};

class derived : public base {
public:
	// print () is already virtual function in
	// derived class, we could also declared as
	// virtual void print () explicitly
	void print() { cout << "print derived class" << endl; }

	void show() { cout << "show derived class" << endl; }
};

int main()
{
    // A obj_1 = B();
    // obj_1.print(); 

    // Animal d = Dog();
    // cout<<d.color<<endl;

    // Base* base;
    // Child child;
    // base = &child;
    // base->Base::display();
    // base->print();

    base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	// bptr->print();

	// // Non-virtual function, binded
	// // at compile time
	// bptr->show();

    // base object1;
    // object1.print();
    // object1.show();

    // derived object2;
    // object2.print();
    // object2.show();

    base* basepointer;
    derived derivedobject;
    basepointer = &derivedobject;
    basepointer->print();
    basepointer->show();

    base object3 = derived();
    object3.print();
    object3.show();

    return 0;
}