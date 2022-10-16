#include <iostream>

using namespace std;

void simint()
{
    int p, r, t, si;

    cin >> p >> r >> t;
    si = p * r * t / 100;
    cout<<si;
}
int main()
{
    cout << "enter the value of p,r,t";
    simint();

    cout << "enter the value of p,r,t again with other values";
    simint();
    return ;
   
}