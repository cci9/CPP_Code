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
        for(int j =0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;

    // spiral order print
    int row_s=0, row_e=n-1, col_s=0, col_e=m-1;

    while(row_s<=row_e && col_s<=col_e)
    {
        // starting row print
        for(int col=col_s;col<=col_e;col++)
        {
            cout<<a[row_s][col]<<" ";
        }
        row_s++;

        // Ending column print
        for(int row=row_s;row<=row_e;row++)
        {
            cout<<a[row][col_e]<<" ";
        }
        col_e--;

        //Ending row print
        for (int col = col_e; col >= col_s; col--)
        {
            cout<<a[row_e][col]<<" ";
        }
        row_e--;

        //starting column print
        for(int row=row_e;row>=row_s;row--)
        {
            cout<<a[row][col_s]<<" ";
        }
        col_s++;

    }

    return 0;
}