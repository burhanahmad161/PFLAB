#include<iostream>
using namespace std;
void printFibonacci(int number);
main()
{
  int number;
  cout<<"Enter length of series:";
  cin>>number;
  printFibonacci(number);
}
void printFibonacci(int number)
{
   int n1=0;
   int n2=1;
   cout<< n1 << ','<<n2<<',';
   for(int count=0; count<number-2; count++)
   {
    int next=n1+n2;
    cout<<next<<',';
    n1=n2;
    n2=next;
   }
}