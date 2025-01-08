#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void swap_1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_2(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int a =10;
    cout<<" a = "<<a<<endl;

    int* apntr = &a;
    cout<<"a stored at address "<<apntr<<endl;

    cout<<"apntr pointer store value of a "<<*apntr<<endl;

    cout<<"apntr pointer stored at address "<<&apntr<<endl;

    apntr++;

    cout<<"a stored at address "<<&a<<endl;

    cout<<"apntr stores address now "<<apntr<<endl;

    cout<<"apntr pointer store value of a "<<*apntr<<endl;
    //it will give garbage value as pointer is shifted to next address

    cout<<"apntr pointer stored at address "<<&apntr<<endl;

    //pointer arrays
    int arr[]={11,22,33};
    cout<<"will address first index "<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    // pointer to pointer
    int b = 55;
    int*b_ptr=&b;
    int **b_pyr_ptr=&b_ptr;

    cout<<"will print address of b stored in b_ptr "<<*b_pyr_ptr<<endl;
    cout<<"will print value of b "<<**b_pyr_ptr<<endl;

    // pointer - pass by reference
    int x = 10, y= 20;
    cout<<x<<" "<<y<<endl;

    swap_1(x, y);

    cout<<x<<" "<<y<<endl;

    swap_2(&x, &y);

    cout<<x<<" "<<y<<endl;

    int* x_ptr = &x;
    int* y_ptr = &y;

    swap_2(x_ptr, y_ptr);
    cout<<x<<" "<<y<<endl;

    return 0;
}
