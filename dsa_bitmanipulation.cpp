#include <iostream>
#include <string>
using namespace std;

int getbit(int n, int k)
{
    return ((n & (1 << k)) != 0);
}
int setbit(int n, int k)
{
    return (n | (1 << k));
}
int clearbit(int n, int k)
{
    return (n & ~(1 << k));
}
int updatebit(int n, int k, int upwith)
{
    return ((n & ~(1 << k)) | (upwith << k));
}
int togglebit(int n, int k)
{
    return (n ^ (1 << k));
}

int main()
{
    int n, k, upwith;
    n = 5; // 101
    k = 1;
    upwith = 0;
    // cout << "The bit at k position is " << getbit(n, k) << endl;
    // cout << "After setting bit value is " << setbit(n, k) << endl;
    // cout << "After clearing bit value is " << clearbit(n, k) << endl;
    cout << "After updating bit value is " << updatebit(n, k, upwith) << endl;
    // cout << "After toggling bit value is " << togglebit(n, k) << endl;

    return 0;
}