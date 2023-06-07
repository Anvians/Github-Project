#include<iostream>

using namespace std;
template<typename T>
struct mystack{
	int size;
	int top;
	T *space;
};
template<class T>
void display(struct mystack<T> st)
{
	for(int i=0;i<=st.top;i++)
		cout<<st.space[i]<<", ";
	cout<<endl;
}
template<class T>
int isempty(struct mystack<T> st)
{
	if(st.top == -1)
		return 1;
	return 0;
}
template<class T>
int getcursize(struct mystack<T> st)
{
	return st.top+1;
}
template<class T>
int getmaxsize(struct mystack<T> st)
{
	return st.size;
}
template<class T>
void push(struct mystack<T> &st, T elem)
{
	if(st.top == st.size-1)
		cout<<"not enough space."<<endl;
	else
		st.space[++st.top] = elem;
}
template<class T>
int pop(struct mystack<T> &st)
{
	if(st.top == -1)
	{
		cout<<"Empty stack."<<endl;
		return 0;
	}
	else
		return st.space[st.top--];
}
template<class T>
void init(struct mystack<T> &st, int size)
{
	st.size = size;
	st.top = -1;
	st.space = new T[size];
}

template<class T>
void oprtn(struct mystack<T> &st)
{
	cout<<"Enter 0 for help: "<<endl;
	while(1)
	{
		int choice;
		cout<<"Enter choice: ";
		cin>>choice;
		if(choice == 0)
		{
			cout<<"Enter 1 to initialize stack."<<endl;
			cout<<"Enter 2 to push element in stack."<<endl;
			cout<<"Enter 3 to pop element from stack."<<endl;
			cout<<"Enter 4 to get maxmimum size of stack."<<endl;
			cout<<"Enter 5 to get current size of stack."<<endl;
			cout<<"Enrer 6 to check if stack is empty."<<endl;
			cout<<"Enter 7 to display stack."<<endl;
		}
		else if(choice == 1)
		{
			cout<<"Enter max size of stack: ";
			int size;
			cin>>size;
			init(st, size);
		}
		else if(choice == 2)
		{
			cout<<"Enter element to push: ";
			T elem;
			cin>>elem;
			push(st, elem);
		}
		else if(choice == 3)
			cout<<"popped elemet is: "<<pop(st)<<endl;
		else if(choice == 4)
			cout<<"max size of stack is: "<<getmaxsize(st)<<endl;
		else if(choice == 5)
			cout<<"current size of stack is: "<<getcursize(st)<<endl;
		else if(choice == 6)
			cout<<"is the stack is empty: "<<isempty(st)<<endl;
		else if(choice == 7)
			display(st);
		else
			return;
	}
}

int main()
{
	cout<<"press 1 for int, 2 for short, 3 for float, 4 for double: ";
	int type;
	cin>>type;
	if(type == 1)
	{
		struct mystack<int> st;
		oprtn(st);
	}
	else if(type == 2)
	{
		struct mystack<short> st;
		oprtn(st);
	}
	else if(type == 3)
	{
		struct mystack<float> st;
		oprtn(st);
	}
	else if(type == 4)
	{
		struct mystack<double> st;
		oprtn(st);
	}
	
}
