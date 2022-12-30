#include<iostream>
using namespace std;
int fun(int n){
    int rem;
    if (n>0){
    
        rem = n%2;
        cout<<rem;
        return fun(int(n/2));
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    fun(n);
    
return 0;
}