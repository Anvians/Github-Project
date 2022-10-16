#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 5;
    int mid = n / 2 + 1;
    
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (i+j == 1 || i==5|| (i + j == 5 && i != 0)|| i+j==3 && i==0)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}