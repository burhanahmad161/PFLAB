#include<iostream>
using namespace std;
main()
{
    int num,b;
    cout<<"Enter a number:";
    cin>>num;
    int n=1;
    int i=num;
    if(i>1 && i>=num)
    {
        cout<<i;
        if(i%4==0)
        {
         b=i*10;   
         cout<<b<<endl;
        }
    }
}