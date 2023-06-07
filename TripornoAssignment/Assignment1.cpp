#include<iostream>
using namespace std;

typedef struct student{
	char name[50];
	int age;
	char dept[10];
	int year;
}student;

void readstudentdata(student slist[], int elem)
{
	for(int i=0;i<elem;i++)
	{
		cout<<"Enter "<<i+1<<"th student info: "<<endl;
		cout<<"Enter name of student: ";
		cin>>slist[i].name;
		cout<<"Enter age: ";
		cin>>slist[i].age;
		cout<<"Enter dept: ";
		cin>>slist[i].dept;
		cout<<"Enter year: ";
		cin>>slist[i].year;
	}
}

void printstudentdata(student slist[], int elem)
{
	for(int i=0;i<elem;i++)
	{
		cout<<"data of "<<i+1<<"th student."<<endl;
		cout<<"name: "<<slist[i].name<<endl;
		cout<<"age: "<<slist[i].age<<endl;
		cout<<"dept: "<<slist[i].dept<<endl;
		cout<<"year: "<<slist[i].year<<endl;
	}
	cout<<endl;
}

int main()
{
	int size;
	cout<<"Enter size of student list: ";
	cin>>size;
	int elem;
	cout<<"Enter no of students to add: ";
	cin>>elem;
	student *slist = new student[size];
	readstudentdata(slist, elem);
	printstudentdata(slist, elem);

}
