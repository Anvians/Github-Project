#include<iostream>
using namespace std;
int love(int n)
{
    if(n<1){
        return 0;
    }
    else{
        cout<<"I love Recursion"<<endl;
        return love(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    love(n);
return 0;
}