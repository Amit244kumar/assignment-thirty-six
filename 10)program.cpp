#include<conio.h>
#include<iostream>
#include<array>

using namespace std;
int main()
{
    int c=0,pr=1;
    array <int,5>ar={1,4,2,5,7};
    array <int,5>s;
    cout<<"First array"<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<ar[i]<<" ";
    }
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==0){
            c++;
            continue;
        }
        pr*=ar[i];
    }
    for(int i=0;i<ar.size();i++)
    {
        if(c>=2)
            s[i]=0;
        else if(c==1&&ar[i]==0)
        {
            s[i]=pr;
        }
        else{
            s[i]=pr/ar[i];
        }
    }
    cout<<endl<<"second array"<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    getch();
    return 0;
}
