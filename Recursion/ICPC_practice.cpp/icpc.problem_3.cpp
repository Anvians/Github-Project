#include<iostream>
using namespace std;
int numbers(int n)
{
    if (n==0)
    {
        return 0 ;
    }
    else{
        cout<<n<<endl;
        return numbers(n-1);
        
    }
}
int main()
{
    int n;
    cin>>n;
    numbers(n);
return 0;
}