#include<iostream>
using namespace std;
main()
{
  int num;
  cout<<"Enter number of sequence:";
  cin>>num;
  int sum=0;
  for(int a=1;a<=num; a++)
  {
    sum=sum+a;
  }
   cout<<sum;
}
