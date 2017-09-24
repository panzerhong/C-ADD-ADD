#include<iostream>
using namespace std;
// Base class
class Base1{
	
	protected  : int a;
	public :int get_a(void);
	
};

class Base2
{
	protected:
		int b;
		int c;
		
	public:
		int get_b(void);
};

class Derived:public Basel,public Base2
{
	protected:
		int c;
	public 
		void cal_Addition();
		void get_data();
		void display_result();
};

void Derived::get_data()
{
	cout<<"\nEnter the numbers to be added:";
	cin>>a>>b;
}

int Base1::get_a()
{
	return a;
}

int Base2:get_b()
{
	c=get_a()+get_b;
}

void Derived::displayed_result()
{
	cout<<"\nValue of a = "<<get_a()<<",value of b = "<<get_b();
	cout<<"\nAdditon of number is : "<<c;
}

int main()
{
	Derived d;
	
	d.get_data();
	d.cal_addition();
	d.display_result();
	
	return 0;
}
