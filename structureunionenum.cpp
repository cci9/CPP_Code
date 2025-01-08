#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    typedef struct deail
    {
        int id;
        float height;
        // char name[];
    } dt;


    dt ctc;
    ctc.id = 5;
    ctc.height = 100.20;

    cout<<ctc.id<<endl;
    cout<<ctc.height<<endl;

    typedef union un
    {
        int id;
        float height;
        // char name[];
    } ut;

    ut chetu;
    chetu.height = 100.20;
    chetu.id = 5;
    cout<<chetu.id<<endl;
    cout<<chetu.height<<endl;

    enum chetan {name, height};
    cout<<name;
    cout<<height;


    return 0;
}