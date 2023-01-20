#include<iostream>
using namespace std;
int totaldigits(int number);
main()
{
  int number;
  cout<<"Enter a number:";
  cin>>number;
  totaldigits(number);    
}
int totaldigits(int number)
 {
  int result=0;
  while(number>0)
  {
  result++;
  number=number/10;
  }
  cout<<result;
 }
