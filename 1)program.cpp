#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int main()
{
    array <int,5>ar;
    array <int,5>::iterator t;
    t=ar.begin();
    cout<<"Enter 5 elements in array"<<endl;
    for(;t!=ar.end();t++)
    {
        cin>>*(t);
    }

    t=ar.begin();
    cout<<"The elements in  array ";
    for(;t!=ar.end();t++)
        cout<<*t<<" ";
    getch();
    return 0;

}
