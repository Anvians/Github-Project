#include<iostream>
using namespace std;
int fibb(int n){
    if (n==1 || n==0){
        return n;

    }
    else{
        return fibb(n-1)+fibb(n-2);
    }
    
}
int main()
{
    int n,i=0;
    cout<<"Enter the Value";
    cin>>n;
    while (i<n){
        cout<<" "<<fibb(i);
        i++;
    }
    
return 0;
}