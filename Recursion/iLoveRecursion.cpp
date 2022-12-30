#include<iostream>
using namespace std;
int love(int(n))
{
    if (n>0)
        cout<<"I Love Recursion"<<endl;
        return love(n-1);
    

}
int main()
{
    int n;
    cout<<"How Much time do you want to print:";
    cin>>n;
    love(n);
return 0;
}