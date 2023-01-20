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
    float p1=0,p2=0,p3=0;
    int b;
    float per1=0,per2=0,per3=0;
    for(int i=0; i<num; i++)
    {
        cout<<"Enter a number:";
        cin>>b;
        int current_number=b;
        if(current_number%2==0)
        {
            p1++;
        }
         if(current_number%3==0)
        {
        p2++;
        }
         if(current_number%4==0)
        {
        p3++;          
        }
    }
   per1=p1/num*100;
   cout<<"p1 is:"<<per1<<endl;
   per2=p2/num*100;
   cout<<"p2 is:"<<per2<<endl;
   per3=p3/num*100;
   cout<<"p3 is:"<<per3<<endl;
}
