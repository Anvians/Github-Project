#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int a = 0, b = 1;
    int temp=0;
    
    cout << "Please Enter the number:";
    cin >> n;
    for (i = 0; i < n;)
    { 
        
        cout <<" " <<temp;
        temp = a + b;
        a = b;
        b = temp;
        ++i;
       
    }

    return 0;
}