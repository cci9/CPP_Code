#include <iostream>
using namespace std;

inline int product(int a, int b = 10)
{
    return a * b;
}
int main()
{
    int a = 10;
    cout << product(a) << endl;
    return 0;
}