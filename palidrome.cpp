#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char name[n+1];
    cin>>name;

    bool pali = true;

    for (int i = 0; i < n; i++)
    {
        if (name[i]!=name[n-1-i])
        {
            pali = false;
            break;
        }
        
    }
    if(pali)
    {
        cout<<"Given name is palidrome";
    }
    else{
        cout<<"Given name is not a palidrome";
    }
    
    return 0;
}