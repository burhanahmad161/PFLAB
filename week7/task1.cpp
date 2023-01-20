#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter a number for table:";
    cin>>n;
     for(int count=1;count<=10;count++)
    {
      cout<<n<<'*'<<count<<'='<<count<<endl;
    }
}