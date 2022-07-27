#include <iostream>
#include <string>
using namespace std;
int sumbyreference(int &c, int &d)
{
    return c + d;
}
int sumbyvalue(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 15;
    cout << sumbyvalue(a, b) << endl;
    cout << sumbyreference(a, b) << endl;
    return 0;
}