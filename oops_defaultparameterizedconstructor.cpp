#include <iostream>
using namespace std;
class chetan
{
    int age, salary;

public:
    chetan(int x, int y);
};
chetan::chetan(int x, int y)
{
    age = x;
    salary = y;
    cout << "Chetan's age is " << age << " and salary is " << salary << endl;
}
int main()
{
    chetan ctc(10, 25);            // implicit call of the parameterized constructor
    chetan chetu = chetan(11, 26); // explicit call of the parameterized constructor

    return 0;
}