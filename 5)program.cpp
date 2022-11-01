#include<conio.h>
#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5>ar;
    cout<<"Enter 5 elements";
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    array <int,5>::iterator t;
    t=ar.begin();
    cout<<"The reverse elements of array";
    for(auto t=ar.rbegin();t!=ar.rend();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
