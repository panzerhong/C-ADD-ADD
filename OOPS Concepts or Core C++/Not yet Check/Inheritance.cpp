#include<iostream>
using namespace std;
//Base class
class Base
{
	int a;
	
	public:
			int b;
			int c;
			
			void get_data();
			int get_a(void);
			void show_data();
}

// Derived class
class Derived : public Base

{
	public:
			void add();
};

void Base::get_data()
{
	cout<<"\nenter the numbers to be added : ";
	cin>>a>>b;
}

int Base::get_a()
{
	return a;
}

void Derived::add()
{
	c = get_a+b;
}

void Base::show_data()
{
	cout<<"\nValue of a = "<<get_a()<<", value of b = "<<b;
	cout<<"\nAddition of number is : "<<c;
}

int main(void)
{
	Derived d;
	d.get_data();
	d.add();
	d.show_data();
	
	return 0;
}
