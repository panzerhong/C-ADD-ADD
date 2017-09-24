#include<iostream>
using namespace std;

//Base class
class Student
{
	protected:
		char name[20];
		int roll_no;
	public :
		void get_details();
};

void Student::get_details()

{
	cout<<"Enter Student Details : ";
	cout<<"\nEnter your Name : ";
	cin>>name;
	
	cout<<"\nEnter your Roll no:";
	cin>>roll_no;
}

class academics:public Student
{
	protected:
		int maths,science,english;
	public :
		void get_marks()
		{
			cout<<"\nEnter the subject marks(for maths, science, english):";
			cin>>maths>>science>>english;
		}
};

class sports
{
	protected:
		int sports;
		
		public void get_sportmrks();
};

void sports::get_sportsmrks()
{
	cout<<"\nEnter your sports marks : ";
	cin>>sports;
}

class Result:public academics,public sports
{
	int total;
	
	public:
		void total_marks();
		void display_details();
};

void result::total_marks()
{
	get_details();
	get_marks();
	get_sportsmrks();
	total=maths+science+english+sports;
}

void Result::display_details()
{
	cout<<"\n\nStudent Records";
	cout<<"\nName : "<<name<<"\n Roll no: "<<roll_no<<"\n Total Marks obtained : "<<total;
}

int main()
{
	Result R;
	
	R.total_marks();
	R.display_details();
	
	return 0;
}

