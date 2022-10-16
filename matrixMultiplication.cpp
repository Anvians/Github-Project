#include<iostream>
using namespace std;
int main()
{
    int A[3][2] = {3,6,5,4,1,2};
    int B[2][3]= {4,5,6,9,8,7};
    int C[2][2];
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2;j++)
        {
            C[i][j]=A[i][j]*B[j][i];
            
            
         
        }
         
    }
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2;j++)
        {
            cout<<C[i][j]<< "  "  ;
            
            
         
        }
        cout<<endl;
         
    }
return 0;
}