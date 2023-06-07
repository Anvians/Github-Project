#include<iostream>

using namespace std;

typedef struct mystack{
	int size;
	int top;
	int *space;
}mystack;

void display(mystack st)
{
	for(int i=0;i<=st.top;i++)
		cout<<st.space[i]<<", ";
	cout<<endl;
}

int isempty(mystack st)
{
	if(st.top == -1)
		return 1;
	return 0;
}

int getcursize(mystack st)
{
	return st.top+1;
}

int getmaxsize(mystack st)
{
	return st.size;
}

void push(mystack &st, int elem)
{
	if(st.top == st.size-1)
		cout<<"not enough space."<<endl;
	else
		st.space[++st.top] = elem;
}

int pop(mystack &st)
{
	if(st.top == -1)
	{
		cout<<"Empty stack."<<endl;
		return 0;
	}
	else
		return st.space[st.top--];
}

void init(mystack &st, int size)
{
	st.size = size;
	st.top = -1;
	st.space = new int[size];
}

int main()
{
	int n, stno;
	cout<<"Enter number of stacks: ";
	cin>>n;
	mystack st[n];
	cout<<"Enter 0 for help: "<<endl;
	while(1)
	{
		int choice;
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice)
		{
		case 0:
			cout<<"Enter 1 to initialize stack."<<endl;
			cout<<"Enter 2 to push element in stack."<<endl;
			cout<<"Enter 3 to pop element from stack."<<endl;
			cout<<"Enter 4 to get maxmimum size of stack."<<endl;
			cout<<"Enter 5 to get current size of stack."<<endl;
			cout<<"Enrer 6 to check if stack is empty."<<endl;
			cout<<"Enter 7 to display stack."<<endl;
			break;
		case 1:
			cout<<"Enter max size of stack: ";
			int size;
			cin>>size;
			cout<<"which stack: ";
			cin>>stno;
			init(st[stno-1], size);
			break;
			
		case 2:
			cout<<"Enter element to push: ";
			int elem;
			cin>>elem;
			cout<<"which stack: ";
			cin>>stno;
			push(st[stno-1], elem);
			break;
			
		case 3:
			cout<<"which stack: ";
			cin>>stno;
			cout<<"popped elemet is: "<<pop(st[stno-1])<<endl;
			break;
		case 4:
			cout<<"Which stack: ";
			cin>>stno;
			cout<<"max size of stack is: "<<getmaxsize(st[stno-1])<<endl;
			break;
		case 5:
			cout<<"Which stack: ";
			cin>>stno;
			cout<<"current size of stack is: "<<getcursize(st[stno-1])<<endl;
			break;
		case 6:
			cout<<"Which stack: ";
			cin>>stno;
			cout<<"is the stack is empty: "<<isempty(st[stno-1])<<endl;
			break;
		case 7:
			cout<<"Which stack: ";
			cin>>stno;
			display(st[stno-1]);
			break;
			
		default:
			return 0;
		}
	}
}





