#include<iostream>
using namespace std;
void print(int num);
main()
{
    int num;
    cout<<"Enter number of rows:";
    cin>>num;
    print(num);
    
} 
void print(int num)
{
    for(int i=1; i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';

        }
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
}        
