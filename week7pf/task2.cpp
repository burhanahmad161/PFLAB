#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number of rows:";
    cin>>num;
    int values=num;
    for(int i=1;i<=num;i++)
    {
        for(int j=values; j>=0;j--)
        {
         cout<<'*';
        }
        values--;
        cout<<endl;
    }
    
}
