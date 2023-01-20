#include<iostream>
using namespace std;

void sum(int number1, int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
void division(int number1, int number2);
main()
{
  int number1;
  int number2;
  char operation; 
  cout<<"enter number:";
  cin>> number1;
  cout<<"enter number:";
  cin>> number2;
  cout<<"enter operation:";
  cin>> operation;
  sum(number1,number2);
  product(number1,number2);
  subtract(number1,number2);
  division(number1,number2); 
  
 if(operation=='+')
{
  sum(number1,number2);
 if(operation=='*')
{
  product(number1,number2);
}
 if(operation=='-')
{
  subtract(number1,number2);
}
 if(operation=='/')
{
  division(number1,number2);
}
}
void sum(int number1, int number2)
 {
  int sum;
  sum= number1+number2;
  cout<<"sum is:"<<sum<<endl;
 }
void product(int number1, int number2)
 {
  int product;
  product= number1*number2;
  cout<<"product is:"<<product<<endl;
}
void subtract(int number1, int number2)

 {
  int subtract;
  subtract= number1-number2;
  cout<<"subtract is:"<<subtract;
 }

void division(int number1, int number2)

 {
  int division;
  division= number1/number2;
  cout<<"division is:"<<division;
 }
