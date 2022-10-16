#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day number";
    cin>>day;
    switch (day)
    {
    case 1: cout<<"monday";
        
        break;
    case 2: cout<<"Tuesday";
    break;
    case 3: cout<<"wednesday";
    break;
    case 4: cout<<"thursday";
    break;
    case 5: cout<<"Friday";
    break;
    case 6: cout<<"Saturday";
    break;
    case 7: cout<<"Sunday";
    break;
    default: cout<<"Invalid Number";
        break;
    }

}