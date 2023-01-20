#include<iostream>
using namespace std;
void upper(int num);
void lower(int num);
main()
{
    int num;
    cout<<"Enter desires number of rows:";
    cin>>num;
    upper(num);
    lower(num);
}
void upper(int num)
{
    int count=num;
    for(int i=1; i<=num; i++)
    {
          for(int i=1; i<=count; i++)
          {
            cout<<" ";
          }
        for(int j=1;j<=i; j++)
        {
          cout<<'*';
        }
          count--;
        
         cout<<endl;
    }
}
void lower(int num)
{
      int count=num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1;j<=i; j++)
        {
          cout<<' ';
        }
          for(int i=1; i<=count; i++)
          {
            cout<<"*";
          }
          count--;
        
         cout<<endl;
}
}
