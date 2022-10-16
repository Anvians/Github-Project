#include<iostream>
using namespace std;
int print_num(int num){
    if (num>0)
    {
    cout<<endl;
    cout<<num;
    print_num(num-1);

    }
}
int main()
{
    print_num(10);
return 0;
}