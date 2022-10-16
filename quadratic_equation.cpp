#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,root1,root2;
    
    cout<<"Enter the coffecient of x^2";
    cin>>a;
    cout<<"Enter the coffecient of x";
    cin>>b;
    cout<<"Enter the coffecient of constant";
    cin>>c;
    root1= (-b+ sqrt(b*b-4*a*c))/(2*a);
    root2= (-b- sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of equation " <<a<<"x^2 +"<<b<<"x +"<<c<<" is "<< root1;
    cout<<"root is "<<root2;
return 0;
}