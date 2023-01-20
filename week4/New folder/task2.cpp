#include<iostream>
using namespace std;
void iseven(int number);
void isodd(int number);
main()
{
  int number;
  cout<<"enter number:";
  cin>>number;
  if(number%2==0)
  {
     iseven(number);
  }
 if(number%2!=0)
  {
    isodd(number);
  }
}
  void iseven(int number)
  {  
  cout<<"even"<<endl;
  }
   void isodd(int number)
  {
   cout<<"odd"<<endl;
  }