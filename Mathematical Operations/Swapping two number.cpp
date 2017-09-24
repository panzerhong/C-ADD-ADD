#include<iostream>
using namespace std;
// Swapping two number
int main()
{
	int x,y;
	cout<<"Enter x number : "<<endl;cin>>x;
	cout<<"Enter y number : "<<endl;cin>>y;
	cout<<"Before swapping\nx="<<x<<"\ny="<<y<<endl;
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<"After swapping\nx="<<x<<"\ny="<<y<<endl;
	
	
}
