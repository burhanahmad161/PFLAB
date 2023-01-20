#include<iostream>
using namespace std;
int percentage(int num);
main()
{
  int num;
  cout<<"Count of cargo:";
  cin>>num;
  percentage(num);
}
int percentage(int num)
{
    float p1=0,p2=0,p3=0;
    float b;
    float c=0,a=0,d=0;
    float per1=0,per2=0,per3=0;
    float sum=0;
    for(int i=0; i<num; i++)
    {
        cout<<"Enter tonnage:";
        cin>>b;
        sum=sum+b;
        int current_number=b;
        if(b<=3)
        {
        a=a+b;
        }
        p1=200*a;
         if(b>3 && b<=11)
        {
        c=c+b;
        }
        p2=c*175;
        if(b>11)
        {
        d=d+b;
        }
        p3=d*120;       
    }
   float total_p=(p1+p2+p3)/sum;
   cout<<total_p<<endl; 
   per1=a/sum*100;
   cout<<"p1 is:"<<per1<<'%'<<endl;
   per2=c/sum*100;
   cout<<"p2 is:"<<per2<<'%'<<endl;
   per3=d/sum*100;
   cout<<"p3 is:"<<per3<<'%'<<endl;
}
