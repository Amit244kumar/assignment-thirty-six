#include<conio.h>
#include<iostream>
#include<array>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    array <int,5>ar;
    cout<<"Enter the 5 elements in array"<<endl;
    array <int,5>::iterator t;
    t=ar.begin();
    for(;t!=ar.end();t++)
        cin>>*t;
    sort(ar.begin(),ar.end(),greater<int>());
    t=ar.begin();
    for(;t!=ar.end();t++)
        cout<<*t<<" ";
    getch();
    return 0;

}
