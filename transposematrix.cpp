#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int n=4, m =4;
    int a[n][m]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;
    int j = 0;
    while(j<m)
    {
        for (int i = j+1; i < n; i++)
        {
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        j++;
    }

    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}