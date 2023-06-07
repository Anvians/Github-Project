#include<iostream>
using namespace std;
int A[10];
int j;
int fun(int A[j])
{
   
    j = j%2==0;
    cout<<A[j];
    return fun(j-1);

}
int main()
{
    int n,i;
    cout<<"Please Enter the Number:";
    cin>>n;
    int p;
    while (i<n)
    {
        cout<<"Enter digit:";
        cin>>p;
        cout<<fun(p);
    }

return 0;
}