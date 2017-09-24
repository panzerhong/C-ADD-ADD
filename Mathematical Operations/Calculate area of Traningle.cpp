#include<iostream>
using namespace std;
int main()
{
	int base,height;
	float area;
	
	cout<<"Enter Base of triangle: \n";
	cin>>base;
	cout<<"Enter Height of trinagle : \n";
	cin>>height;
	area = 0.5*base*height;
	cout<<"Area of trinagle for given base and height is : "<<area<<"units.";
	return 0;
}
