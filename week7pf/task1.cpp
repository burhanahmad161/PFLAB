#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number of rows:";
    cin>>num;
    for(int i=1; i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';

        }
        cout<<endl;
    }
    
}