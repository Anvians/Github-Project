#include <iostream>
using namespace std;
int n1, n2;
int gcd;
int max;
void integers()
{
    cout << "Please Enter the first number:";
    cin >> n1;
    cout << "please enter the second number";
    cin >> n2;
}
void factorone()
{
    int i;
    int factor;
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            factor = n1 / i;
            cout << "factor for" << n1 << "is" << factor << endl;
        }
    }
}
void factortwo()
{
    int i;

    int factor;
    for (i = 1; i <= n2; i++)
    {
        if (n2 % i == 0)
        {
            factor = n2 / i;
            cout << "factor for" << n2 << "is" << factor << endl;
        }
    }
}
int main()
{
    integers();

    factorone();
    cout << "------------------------------" << endl;
    factortwo();
    return 0;
}