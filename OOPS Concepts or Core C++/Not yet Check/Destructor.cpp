#include<iostream>
using namespace std;
int count=0;
class Student{
	
	public :
			char name;
			int roll_no;
			int marks;
			//Default constructor
			
			Student()
			{
				count++;
				cout<<"\nConstructor Called!!";
				cout<<"\nConstructor called "<<count<<" times.\n";
				
				name = 'A'
				roll_no = 0;
				marks = 0;
			}
			
			void diplsy_data()
			{
				cout<<"Name:"<<name<<endl;
				cout<<"Roll no : "<<roll_no<<endl;
				cout<<"Marks : "<<marks<<endl;
			}
			//Destructor
			Student()
			{
				cout<<"\n\nDestructor Called!!\nAll values destroyed";
				cout<<"\nDestructor called "<<count<<" times.\n";
				count--;
		}
};

int main()
{
	Student s1;	//Default Constructor called
	s1.display_data();
	Student s2;
	return 0;
}

