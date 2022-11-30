#include <iostream>
using namespace std;
char A[2][2] = {'1', '2', '3', '4'};
class playerone
{
public:
    int i, j;
    void tictac()
    {

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    void inputfirst()
    {
        int n;
        double O;
        double x;
        cout << "Enter the number its your turn:";
        cin >> n;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (n == 1)
                {
                    A[0][0] = 'x';
                   cout << A[i][j]<<" ";
                } 
                if (n == 2)
                {
                    A[0][1] = 'O';
                   cout << A[i][j]<<" ";
                } 
                
                
            }
            cout<<endl;
        }
    }
};
int main()
{
    playerone p;

    p.tictac();
    p.inputfirst();
    return 0;
}