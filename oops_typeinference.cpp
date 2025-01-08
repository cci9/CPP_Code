#include<iostream>
#include<cmath>
#include <stdint.h>
#include<string>
#include<typeinfo>

using namespace std;

auto sum(int a, double b){return a + b;}

int main()
{
    int8_t x = 10;
    cout<<"x data type is "<<typeid(x).name()<<endl;//deduce data type int8: a
    cout<<"function return data type is "<<typeid(sum(5, 30.123)).name()<<endl;//deduce data type double: d

    int a = 42;
    double b = 3.14;
    decltype(a + b) c = a + b; // c is deduced to be double

    std::cout << "Type of c: " << typeid(c).name() << std::endl; // Implementation-defined

    return 0;
}