#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void);
    void getdata(void);

    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count;
void Employee::setdata(void)
{
    cout << "Enter the id: " << endl;
    cin >> id;
    count++;
}
void Employee::getdata(void)
{
    cout << "The employee id is " << id << " and the employee number is " << count << endl;
}
int main()
{
    Employee chetan, harry;
    chetan.setdata();
    chetan.getdata();
    Employee::getcount();

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    return 0;
}