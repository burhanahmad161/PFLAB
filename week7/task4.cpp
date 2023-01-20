#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
  int number,digit;
  cout<<"Enter a number:";
  cin>>number;
  cout<<"Enter a digit:";
  cin>>digit;  
  frequencyChecker(number,digit);    
}
 int frequencyChecker(int number,int digit)
 {
  int result=0;
  while(number>0)
  {
  result++;
  number=number/10;
  number++;
  }
  cout<<number;
}