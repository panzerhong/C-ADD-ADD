#include<iostream>
using namespace std;
/*class Base {
    public:
        int publicMember;
    protected:
        int protectedMember;
    private:
        int privateMember;
};
Everything that is aware of Base is also aware that Base contains publicMember.
Only the children (and their children) are aware that Base contains protectedMember.
No one but Base is aware of privateMember.

The same happens with public, private and protected inheritance. Let's consider a class Base and a class Child that inherits from Base.

If the inheritance is public, everything that is aware of Base and Child is also aware that Child inherits from Base.
If the inheritance is protected, only Child, and its children, are aware that they inherit from Base.
If the inheritance is private, no one other than Child is aware of the inheritance.


class A 
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};*/
 
 
 class Student	//Base class
 {
 	protected:
 			char name[100];		
 			double roll_no;
 			
 		void get_details();	// This is protected Member Function in class Student
 };
 
 
 class academic:public Student	//derived class.
 {
 	public : 
 		double marks;
 		void academic_details();
 		void display();
 		
 };
 
 
 void academic::academic_details()
{
	get_details();

	cout<<"\nEnter your marks : ";cin>>marks;
	
}
void academic::display()
{
	cout<<"\n Student details.\n";
	cout<<"Name :"<<name;
	cout<<"\nRoll no: "<<roll_no;
	cout<<"\nmarks : "<<marks;
}
void Student::get_details()
{
	cout<<"\nEnter your name:";cin>>name;
	
	cout<<"\nEnter your roll no:";cin>>roll_no;
}


int main()
{

	academic a;
	a.academic_details();
	a.display();
	return 0;
}
