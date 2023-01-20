#include<iostream>
using namespace std;
int calculateLCM(int number1,int number2,int gcd);
int calculateGCD(int number1,int number2);
main()
{
  int number1,number2,gcd;
  cout<<"Enter a number:";
  cin>>number1;
  cout<<"Enter a number:";
  cin>>number2;
  gcd=calculateGCD(number1,number2);
  cout<<"GCD is:"<<gcd<<endl;
  int LCM=calculateLCM(number1,number2,gcd);
  cout<<"LCM is:"<<LCM;
}

int calculateGCD(int number1,int number2)
{
    int gcd;
    while(number1!=number2)
{
    if(number1>number2)
   { 
    number1=number1-number2;
    gcd=number1;
   }
    else
   {
    number2=number2-number1;
    gcd=number2;
   }
  return gcd;
}
      
}
int calculateLCM(int number1,int number2,int gcd)
{
    int LCM=(number1*number2)/gcd;
    return LCM;
}