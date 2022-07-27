#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 1222;
        cout << "Enter id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "employee id is " << id << endl;
    }
};
int main()
{
    Employee ctc[4];
    for (int i = 0; i < 4; i++)
    {
        ctc[i].setid();
        ctc[i].getid();
    }
    return 0;
}