#include<iostream>
using namespace std;
int main()
{
    int i,A[10]={2,6,7,8,9,6,5,4,3,6};
    int key, l=0,h=9;
    int mid;
    cout<<"Enter key";
    cin>>key;
    while (l<=h)
    {
       mid= (l+h)/2;
       if (key==A[mid])
       {
        cout<<"key found at"<<mid;
        return 0;
       }
       else if (key<A[mid])
       {
         l=l+1;
       }
       else if (key > A[mid])
       {
        h=h-1;
       } else{
       cout<<"key not found";
       }
    }
    
return 0;
}