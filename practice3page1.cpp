#include<iostream>
using namespace std;
int average;
int pm,cm,mm;
void mark(){
    cout<<"Please enter the physics mark:";
    cin>>pm;
    cout<<"Please enter the chemistry mark:";
    cin>>cm;
    cout<<"Please enter the mathematics mark:";
    cin>>mm;

}
int total(){
    
    average=(pm+cm+mm)/3;
    return average;
    
}
int grade(){

   if (average>90 && average<=100)
   {
    cout<<"Your grade is A+";
   }
   else if (average>80 && average<=90)
   {
    cout<<"Your grade is A";
   }
   else if (average>70 && average<=80)
   {
    cout<<"Your grade is B+";
   }
   else if (average>60 && average<=70)
   {
    cout<<"Your grade is B";
   }
   else if (average>50 && average<=60)
   {
    cout<<"Your grade is C";
   }
   else if (average<50)
   {
    cout<<"Your grade is F and you are Failed";
   }
   return 0;
}
int main()
{
    mark();
    total();
    cout<<"Your average is"<<average<<endl;
    
    cout<<grade();
return 0;
}