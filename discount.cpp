#include<iostream>
using namespace std;
int main()
{
    int amount,Discounted_amount;
    cout<<"Enter the amount";
    cin>>amount;
    
    if (amount<100)
    {
        cout<<"your amount is" <<amount ;
        cout<<" \n Discounted amount is Nil" ;
        amount =amount;
        cout<<"\namount after discouynt is"<< amount;


    }
    else if (amount>=100 && amount<500)
    {
        cout<<"your amount is" <<amount ;
         
        Discounted_amount =(amount*10)/100;
        cout<<"\n Discount is "<< Discounted_amount;
        amount = amount-Discounted_amount;
        cout<<"\n payable amount is"<< amount;
    }
    else if (amount>=500)
    {
        cout<<"your amount is" <<amount ;
         
        Discounted_amount =(amount*20)/100;
        cout<<"\n Discount is "<< Discounted_amount;
        amount = amount-Discounted_amount;
        cout<<"\npayable amount is"<< amount;
    }
    else
    {
        cout<<"\nHave a good day";
    }
    
        
        
  
return 0;
}