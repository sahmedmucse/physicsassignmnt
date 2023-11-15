#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float base,height,area,width,r,reactangle;

    cout<<"enter base:"<<endl;
    cin>>base;

    cout<<"Enter height:" <<endl;
    cin >> height;

    area = 0.5 * base * height ;

    cout<<"area of trinagle : " << area<<endl;

    cout << "Enter width:"<<endl;
    cin>> width;
    reactangle = width * height;
    cout<<"reactangle : "<<reactangle <<endl;


    cout<<"Enter R:"<<  endl;
    cin>> r;
    cout << "R = " << r << endl ;

    getch();
}
