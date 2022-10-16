#include<iostream>
using namespace std;
int q,r,n;
void division()
{
    cout<<"Enter the Dividend:";
    cin>>n;
    cout<<"Enter the number Divisor:";
    cin>>r;

}
int quotient(){
    q=n/r;
    return q;
}
int main(){
    division();
    quotient();
    cout<<"quotient is"<<q;
return 0;
}