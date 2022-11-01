#include<conio.h>
#include<iostream>
#include<array>

using namespace std;

int main()
{
    int j;
    array <int,10>ar={3,5,6,7,3,2,4,2,1,9};
    cout<<"The array elements "<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<"Enter you the index to access element"<<endl;
    cin>>j;
    cout<<"The element at "<<j<<" is "<<ar[j];
    getch();
    return 0;
}
