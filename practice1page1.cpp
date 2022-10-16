#include <iostream>
using namespace std;
int n1, n2;
int intro()
{

    cout << "Enter the n1";
    cin >> n1;
    cout << "Enter the n2";
    cin >> n2;
}
int swap()
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main(){
   intro();
   swap();
   cout<<n1<<" "<<n2;


return 0;
}