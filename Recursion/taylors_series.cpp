#include <iostream>
using namespace std;
double taylor(int x, int n)
{
    static double f = 1, p = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x,n-1);
        f = f * n;
        p = p * x;
        return r+(p/f);
    }
}
int main()
{
    
    cout << taylor(1, 5);
    return 0;
}