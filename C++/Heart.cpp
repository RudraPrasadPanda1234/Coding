#include<iostream>
using namespace std;
int main()
{
    int a,b,size=15,end1;
    for(a=size/2;a<=size;a=a+2)
    {
        for(b=1;b<size-a;b=b+2)
            cout<<" ";
        for(b=1;b<=a;b++)
            cout<<"K";
        for(b=1;b<size-a;b++)
            cout<<" ";
        for(b=1;b<=a-1;b++)
           cout<<"K";
        cout<<end1;
    }
    for(a=size;a>=0;a--)
    {
        for(b=a;b<size;b++)
          cout<<" ";
        for(b=1;b<=((a*2)-1);b++)
           cout<<"K";

          cout<<end1;
    }
} 