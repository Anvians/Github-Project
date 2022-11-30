#include<iostream>
using namespace std;
int main()
{
    int r,h,v;
    float pi=3.14;
    int *pr,*ph,*pv;
    pr=&r;
    pr=&h;
    pv=&v;
    cout<<"Enter the value of r";
    cin>>*pr;
    cout<<"Enter the value of h";
    cin>>*ph;
    *pv = (pi)*(*pr)*(*pr)*(*ph);
    cout<<"Volume of cylinder is:"<<*pv;



return 0;
}