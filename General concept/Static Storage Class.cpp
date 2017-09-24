#include<iostream>
using namespace std;

void stat_func()	
/*static member function can be called even if no objects of the class 
exist and the static functions are accessed using only the class name
 and the scope resolution operator ::::A static member function can 
 only access static data member, other static member function and any 
 other functions from outside the class */
{
	 int count = 0;
	count++;
	cout<<"\nEnter into the Function "<<count<<" times "<<endl;
	
}

int main()
{
	cout<<"\nFunction Called.\n";
	
	stat_func();
	stat_func();
	stat_func();
	
	return 0;
}
