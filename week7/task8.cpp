#include<iostream>
using namespace std;

float calculateMoney(int age,float machinePrice,int toyPrice);

int main()
{
    int age;
    float machinePrice;
    int toyPrice;
    float final;
    
    cout<<"Enter age of Lilly:";
    cin>>age;
    cout<<"Enter washing machine price:";
    cin>>machinePrice;
    cout<<"Enter Unit price of each toy :";
    cin>>toyPrice;
    
    final = calculateMoney(age,machinePrice,toyPrice);
    cout<<final;
}
float calculateMoney(int age,float machinePrice,int toyPrice)
{   
    float moneyEven=0;
    float moneyOdd=0;
    float totalMoney;
    int toyNumbers=0;
    
    for(int num=age;num>0;num--)
    {
        if(age%2==0)
            {
            moneyEven=moneyEven+5*age;
            moneyEven=moneyEven-1;
            
            }     
        if(age%2!=0)
            {
            toyNumbers=toyNumbers+1;
            }
            age=age-1;
    } 
    moneyOdd=toyNumbers*toyPrice;
   totalMoney=moneyEven + moneyOdd;

   if(totalMoney>=machinePrice)
    {
     cout<<"Yes!"<<endl;
     return totalMoney-machinePrice;
    }
    if(totalMoney<machinePrice)
    {
     cout<<"No!"<<endl;
     return machinePrice-totalMoney;
    }
}