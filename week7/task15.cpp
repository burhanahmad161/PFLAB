#include<iostream>
using namespace std;
float calculatePrice(float money,int year);
main()
{
    float money;
    int year;
    cout<<"Enter Inheritant money:";
    cin>>money;
    cout<<"Enter year:";
    cin>>year;
    money=calculatePrice(money,year);
    cout<<money;
}
float calculatePrice(float money,int year)
{
    int years=18;
    for(int currentYear=1800;currentYear<=year;currentYear++)
    {
        if(currentYear%2==0)
        {
            money=money-12000;
        }
        else
        money=money-(12000+50*years);
    }
   return money;
}