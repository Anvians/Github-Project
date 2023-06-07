#include<iostream>

using namespace std;

struct cmplx
{
	int real;
	int img;
};

template<class T>
void swapelem(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void display(T x, T y)
{
	cout<<"Elemets: "<<x<<" "<<y<<endl;
}

void read(struct cmplx &c1, struct cmplx &c2)
{
	cout<<"Enter first numbers real and img part: ";
	cin>>c1.real>>c1.img;
	cout<<"Enter second complex number: ";
	cin>>c2.real>>c2.img;
}

void displaycmplx(struct cmplx c1, struct cmplx c2)
{
	cout<<"First complex: "<<c1.real<<"+i"<<c1.img<<endl;
	cout<<"second complex: "<<c2.real<<"+i"<<c2.img<<endl;
}

int main()
{
	cout<<"Enter 0 for help"<<endl;
	while(1)
	{
		int choice;
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice)
		{
			case 0:
				cout<<"Enter 1 to swap int."<<endl;
				cout<<"Enter 2 to swap short."<<endl;
				cout<<"Enter 3 to swap float."<<endl;
				cout<<"Enter 4 to swap double."<<endl;
				cout<<"Enter 5 to swap struct."<<endl;
				cout<<"Enter 6 to exit."<<endl;
				break;
			case 1:
				int num1, num2;
				cout<<"Enter two ints: ";
				cin>>num1>>num2;
				swapelem(num1, num2);
				display(num1, num2);
				break;
			case 2:
				short sh1, sh2;
				cout<<"Enter two short num: ";
				cin>>sh1>>sh2;
				swapelem(sh1, sh2);
				display(sh1, sh2);
				break;
			case 3:
				float fl1, fl2;
				cout<<"Enter two float value: ";
				cin>>fl1>>fl2;
				swapelem(fl1, fl2);
				display(fl1, fl2);
				break;
			case 4:
				double db1, db2;
				cout<<"Enter two double value: ";
				cin>>db1>>db2;
				swapelem(db1, db2);
				display(db1, db2);
				break;
			case 5:
				struct cmplx c1, c2;
				read(c1, c2);
				swapelem(c1, c2);
				displaycmplx(c1, c2);
				break;
			default:
				return 0;
		}
	}
}
