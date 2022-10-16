#include<iostream>
using namespace std;
int i;
void table(int n){
    if (n>0 && i<10 && i++)
    {
       
        
        cout<<n<<endl;
        table(n);
        
    }
    
}
int main()
{
    table(2);
return 0;
}