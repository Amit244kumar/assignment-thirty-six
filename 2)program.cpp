#include<conio.h>
#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5>ar;
    array <int,5>::iterator t;
    t=ar.begin();
    cout<<"Enter 5 elements in array"<<endl;
    for(;t!=ar.end();t++)
        cin>>*t;
    cout<<"The size of array is "<<ar.size();
    getch();
    return 0;
}
