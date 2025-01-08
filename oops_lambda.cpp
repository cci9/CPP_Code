#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
     int x =5, y =11;
    auto add = [x, y](){return x+y;};
    auto add_1 = [](int x, int y){return x+y;};
    auto add_2 = [x, y](int p, int q){return x+y+p+q;};
    auto add_3 = [=](){return x+y;};
    auto add_4 = [&x, &y](){
        x = 20;
        y = 30;
        return x+y;};
    auto add_5 = [x, y]() mutable{
        x = 100;
        y = 200;
        return x+y;};

    cout<<add()<<endl;
    cout<<add_1(x, y)<<endl;
    cout<<add_2(x, y)<<endl;
    cout<<add_3()<<endl;
    cout<<add_4()<<endl;
    cout<<x<<" "<<y<<endl;
    cout<<add_5()<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}