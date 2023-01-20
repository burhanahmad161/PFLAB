#include<iostream>
using namespace std;
int percentage(int num);
main()
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  percentage(num);
}
int percentage(int num)
{
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    int b;
    float per1=0,per2=0,per3=0,per4=0,per5=0;
    for(int i=0; i<=num;i++)
  {
    cout<<"Enter a number:";
    cin>>i;
    int current_number=i;
    if(current_number>0 && current_number<=200)
    p1++;
    else if(current_number>200 && current_number<=400)
    p2++;
    else if(current_number>400 && current_number<=600)
    p3++;
    else if(current_number>600 && current_number<=800)
    p4++;
    else
    p5++;          
  }
   per1=p1/num*100;
   cout<<"p1 is:"<<per1<<endl;
   per2=p2/num*100;
   cout<<"p2 is:"<<per2<<endl;
   per3=p3/num*100;
   cout<<"p3 is:"<<per3<<endl;
   per4=p4/num*100;
   cout<<"p4 is:"<<per4<<endl;
   per5=p5/num*100;
   cout<<"p5 is:"<<per5<<endl;
}
