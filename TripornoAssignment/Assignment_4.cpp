#include<iostream>
using namespace std;

typedef struct cmplx
{
	int real;
	int img;
}cmplx;

template<typename T>
struct array
{
	int size;
	T *space;
};

template<class T>
void swapelem(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void bubble(T arr[], int n)
{
	for(int i=n-1;i>0;i--)
		for(int j=0;j<i;j++)
			if(arr[j]>arr[j+1])
				swapelem(arr[j], arr[j+1]);
}

template<class T>
void display(T arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<", ";
	cout<<endl;
}

void displaycmplx(cmplx arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i].real<<"+i"<<arr[i].img<<endl;
}

int main()
{
	cout<<"press 0 for help"<<endl;
	while(1)
	{
		int choice;
		cout<<"choice: ";
		cin>>choice;
		if(choice == 0)
		{
			cout<<"press 1 to sort ints."<<endl;
			cout<<"press 2 to sort short nums"<<endl;
			cout<<"press 3 to sort float nums"<<endl;
			cout<<"press 4 to sort doubles"<<endl;
			cout<<"press other key to exit"<<endl;
		}	
		else if(choice == 1)
		{
			int n;
			cout<<"size: ";
			cin>>n;
			int arr[n];
			cout<<"Enter elements: ";
			for(int i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr, n);
			display(arr, n);
		}
		else if(choice == 2)
		{
			int n;
			cout<<"size: ";
			cin>>n;
			short arr[n];
			cout<<"Enter elements: ";
			for(int i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr, n);
			display(arr, n);
		}
		else if(choice == 3)
		{
			int n;
			cout<<"size: ";
			cin>>n;
			float arr[n];
			cout<<"Enter elements: ";
			for(int i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr, n);
			display(arr, n);
		}
		else if(choice == 4)
		{
			int n;
			cout<<"size: ";
			cin>>n;
			double arr[n];
			cout<<"Enter elements:";
			for(int i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr, n);
			display(arr, n);
		}
	


	/*	
		else if(choice == 5)
		{
			int n;
			cout<<"size: ";
			cin>>n;
			cmplx arr[n];
			cout<<"Enter complex in real img part: "<<endl;
			for(int i=0;i<n;i++)
				cin>>arr[i].real>>arr[i].img;
			bubble(arr, n);
			displaycmplx(arr, n);
		}
	*/
		else
			return 0;
	}
}
