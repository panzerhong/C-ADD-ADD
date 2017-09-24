#include<iostream>
using namespace std;
class Student{
	
	public : char name;
			int roll_no;
			int marks;
			
			char namecop;
			int roll_nocop;
			int markscop;
			
			//Default Constructor
		Student()
			{
				name = 'A';
				roll_no = 0;
				marks = 0;
			}
			
			//Copy Constructor
			Student(const Student&obj)
			{
				name = obj.name;
				roll_no=obj.roll_no;
				marks = obj.marks;
			}
			
			void display_data()
			{
				cout<<"Name : "<<name<<endl;
				cout<<"Roll no:"<<roll_no<<endl;
				cout<<"Marks : "<<marks<<endl;
			}
};


int main()
{
	Student s1;		//Default Constructor called
	Student s2=s1;	//copy Constructor called
	
	cout<<"\nData from default Constructor : \n";
	s1.display_data();
	
	cout<<"\nData from copy constructor : \n";
	s2.display_data();
	
	return 0;
}
