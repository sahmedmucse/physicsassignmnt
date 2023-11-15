#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"how many row and col"<<endl;
    cin>>row>>col;

    int  a[row][col];


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "a["<<i<<"]"<< "["<<j<<"]=";
                                                cin>>a[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << a[i][j]<<" " ;
        }
        cout<<endl;
    }

    getch();
}
