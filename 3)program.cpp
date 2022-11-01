#include<conio.h>
#include<iostream>
#include<array>

using namespace std;
int main()
{
    array <int,7>ar={4,6,5,8,7,9,5};
    cout<<"The first element in array  : "<<ar.front()<<endl;
    cout<<"The last element in array   : "<<ar.back();
    getch();
    return 0;
}
