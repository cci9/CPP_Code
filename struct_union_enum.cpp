#include <iostream>
using namespace std;

typedef struct detail // typedef keyword is used to give short name to the structure
{
    int rollnum;
    int age;
    char name;
    float score;
} dtc;

typedef union employee // typedef keyword is used to give short name to the union
{
    int salary;
    float invest;
    char name;
    char lastname;
} em;

int main()
{
    // code for structure
    dtc chetan;
    chetan.age = 28;
    chetan.name = 'c';
    chetan.score = 87.5;
    cout << "chetan's age is " << chetan.age << endl;
    cout << "chetan's name starts with " << chetan.name << endl;
    cout << "chetan's score is " << chetan.score << endl;
    cout << endl;

    // code for union
    em chetu;
    chetu.salary = 15;
    chetu.lastname = 'd';
    chetu.name = 'c';
    cout << "chetan's salary is " << chetu.salary << endl;
    cout << "chetan's salary is " << chetu.name << endl;
    cout << "chetan's lastname is " << chetu.lastname << endl;

    // code for enum
    enum meal
    {
        lunch,
        breakfast,
        snacks,
        dinner
    };
    cout << lunch << "\t";
    cout << breakfast << "\t";
    cout << snacks << "\t";
    cout << dinner << "\n";
    meal m1 = lunch;
    cout << m1;

    return 0;
}