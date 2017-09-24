#include<iostream>
using namespace std;

class addition
{
	private:						// Declaring data type and function
		int n1;
		float n2;
		float result;
		
		public :
			void get_data();
			float calc_add();
			void display();
		
};

void addition::get_data()
{
	cout<<"Enter the two number to be added : ";
	cin>>n1>>n2;
}

void addition::display()
{
	cout<<"\nResult of two numbers is : "<<result;
}
float addition::calc_add()
{
	result = n1+n2;
}

int main()
{
	addition a;

	
	a.get_data();
	a.calc_add();
	a.display();
	
	return 0;
}
