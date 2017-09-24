#include<iostream>
using namespace std;

class Area
{
	public:	// Declaring by using public 
		int base;
		int breadth;
		int height;
		int length;
		int side;};
int main()
{
	Area A1,A2,A3; float area;
	cout<<"Area of Rectangle.\n";
	cout<<"\nEnter the  of rectangle:";cin>>A1.length;		// /Accessing to the value by using . 
	
	cout<<"Enter the breadth of rectangle : ";cin>>A1.breadth;
	cout<<"\n\nArea of Square.\n";cin>>A2.side;
	
	cout<<"\n\nEnter the side of square : ";cin>>A2.side;
	cout<<"\n\nArea of traingle\n";
	
	cout<<"\n\nEnter the base of traingle:";cin>>A3.base;
	cout<<"\n\nEnter the height of traingle:";cin>>A3.height;
	area=A1.length*A1.breadth;
	cout<<"\n\nArea of rectangle is = "<<area<<"units";
	area=A2.side*A2.side;
	cout<<"\n\nArea of square is "<<area<<"units";
	area=(1/2)*A3.base*A3.height;
	cout<<"\n\nArea of traigle is = "<<area<<"units";
	return 0;
	
	
}
