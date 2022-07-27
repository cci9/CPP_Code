#include <iostream>
using namespace std;

class BankInterest
{
    int principal;
    int years;
    float rate;
    float returnval;

public:
    BankInterest(){};
    BankInterest(int p, int y, float r);
    BankInterest(int p, int y, int r);
    void show()
    {
        cout << "The principal was " << principal << endl;
        cout << "The numbr of years were " << years << endl;
        cout << "The interest rate was " << rate << endl;
        cout << "The return amount is " << returnval << endl;
    }
};
BankInterest::BankInterest(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnval = principal;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval * (1 + rate);
    }
}
BankInterest::BankInterest(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnval = principal;
    for (int i = 0; i < years; i++)
    {
        returnval = returnval * (1 + rate);
    }
}

int main()
{
    int p, y, r;
    float R;
    cout << "Enter principal, year, and rate in percentage decimal respectively" << endl;
    cin >> p >> y >> r >> R;
    cout << endl;

    BankInterest case1, case2, case3;
    case1 = BankInterest(p, y, r);
    case1.show();
    cout << endl;
    case2 = BankInterest(p, y, R);
    case2.show();
    return 0;
}