#include<iostream>
using namespace std;
void checkresult(int marks);
main()
{
  int marks;
 while(true)
{ 
  cout<<"enter marks";
  cin>>marks;
  checkresult(marks);
}
}
void checkresult(int marks)
{

if(marks>50)
cout<<"Pass";
if(marks<50)
cout<<"Fail";
if(marks==50)
cout<<"you need to improve";
}









