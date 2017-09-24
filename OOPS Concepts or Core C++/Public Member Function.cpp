#include<iostream>
using namespace std;
// Public Memeber Function
class student_data
{
	public:
		char name[50];
		int roll_no;
		
		void get_data();		//member function declaration
		int display_data();
};

void student_data::get_data()	// Void student_data::get_data() we see is the syntax, It is Member function definitions,
{
	cout<<"\nEnter your name : ";
	cin>>name;
	
	cout<<"\nEnter your roll no:";
	cin>> roll_no;
}
int student_data::display_data()	// The information of student was stored in to the member function declaration 
{
	cout<<"\n\nStudent details.\n";
	
	cout<<"Name: "<<name;
	
	cout<<"\nRoll no: "<<roll_no;
}

int main()
{
	student_data s1,s2;			// Creating an object, s1 and s2 are the object of of student_data
	s1.get_data();				// the object was tagged to link to function get_data();
	s2.get_data();	
	
	s1.display_data();
	s2.display_data();
	return 0;
}
