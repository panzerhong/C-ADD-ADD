#include<iostream>
using namespace std;

class Base_class					//Abstract base class
{
	public:
		virtual void show_data()=0;		//Pure Virtual Function
};


class Derived_class:public Base_class
{
	public :
		void show_data()
		{
			cout<<"This is a simple to explain abstract class..";
		}
};


int main()
{
	Derived_class baseobj;		//Creating Object baseobj
	Derived_class dobj;			//Creating Object dobj
	
	
	Base_class*b;				// The Object create the pointer b
	
	
	b=&dobj;					// The pointer b point to the address of the object dobj
	b->show_data();				//	The pointer b point to the function of show_data();
	
	return 0;
}
