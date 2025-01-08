#include<iostream>

using namespace std;

bool Hysteresis(float low, float high, float speed, bool state)
{
    if (speed < low && !state) 
    {return state = true;}
    else if (speed < high && state) 
    {return state = false;}
    return state;
}

int main()
{
    float lowthresh = 14.5;
    float highthresh = 15.5;
    static bool currentstate;
    float speed=12;
    currentstate = Hysteresis(lowthresh, highthresh, speed, currentstate);
    // for(int i = 12; i <= 17; i=i+0.3)
    // {
    //     bool current = Hysteresis(lowthresh, highthresh, i, currentstate);
    //     cout<<current;
    // }
    return 0;
}