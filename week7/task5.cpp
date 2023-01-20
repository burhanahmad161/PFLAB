#include<iostream>
using namespace std;
int totalSum(int number);
main()
{
  int number;
  cout<<"Enter a number:";
  cin>>number;
  totalSum(number);    
}
int totalSum(int number)
 {
  int sum=0;
  while(number!=0)
  {
  
  sum=sum+number%10;
  number=number/10; 
  }
  cout<<sum;
 }
