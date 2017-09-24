#include<iostream>
using namespace std;

class Student
{
	public:
		char name;
		int roll_no;
		int marks;
		
		//Default Constructor
		Student();
		
		void display_data()
		{
			cout<<"Values from default constructer are : "<<endl;
			cout<<"Name : "<<name<<endl;									//Get the value from the data type and display
			cout<<"Roll no : "<<roll_no<<endl;								
			cout<<"Marks : "<<marks<<endl;
		}
};

Student::Student()		// Assigning the value to the datatype
{
	name = 'A';
	roll_no = 1;
	marks=1;
}

int main()
{
	Student s;			// Creating object s of Class Student
	s.display_data();	// Object access to function display_data()
	return 0;
}
