#include<conio.h>
#include<iostream>
#include<array>

using namespace std;
int main()
{
    array <int,0>ar;
    if(ar.empty()==true)
    {
        cout<<"The array is empty";
    }
    else
        cout<<"The array is not empty";
    getch();
    return 0;
}
