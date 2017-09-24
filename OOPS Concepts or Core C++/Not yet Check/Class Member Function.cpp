#include<iostream>
using namespace std;
 
 class rectangle	// Declaring an class
 {
 	public :
 		double length;
		 double breadth;
		 double area;
 		
 		// Member function declaration
 		
 		void calculate_area();
 		void get_dimensions();
 		void display();

 };
 
 // Member functions definitions
 void rectangle::get_dimensions()
 {
 	cout<<"\nEnter the length and breadth of rectangle to be calculated: ";
 	cin>>length>>breadth;
 }
 
 void rectangle::calculate_area()
 {
 	area = length*breadth;
 }
 
 void rectangle::display()
 {
 	cout<<"\nLength of rectangle = "<<length<<",Breadthe of rectangle = "<<breadth<<endl;
 	
 	 calculate_area();
 	cout<<"\nArea of rectangle is : "<<area<<"units";
 }
 
 int main()
 {
 	rectangle r;		//Creating an object r or another way is tag
 	r.get_dimensions();
 	r.display();
 	
 	return 0;
 }
