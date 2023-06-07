#include<iostream>
using namespace std;
int fabonnacy(int n)
{
    int a=0;
    int b=1;
    int c=0;
    if(n<1)
    {
        return n;
    }
    else{
        
        return fabonnacy(n-1)+fabonnacy(n-2);
        
    }

}
int main()
{
    int n;
    cout<<fabonnacy(5);
return 0;
}