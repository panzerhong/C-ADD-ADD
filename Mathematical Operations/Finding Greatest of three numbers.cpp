#include<iostream>
using namespace std;
// Finding the greatest of 3 three number
int main()
{
	int x,y,z;
	cout<<"Enter the three number"<<endl;
	cin>>x>>y>>z;
	if(x>y&&x>z)
	{
		cout<<x<<"is the greatest number"<<endl;
	}
	else if(y>x&&y>z)
	{
		cout<<y<<"is the greatest number"<<endl;
	}
	else if(z>x&&z>y)
	{
		cout<<z<<"is the greatest number"<<endl;
	}
	else
	cout<<x<<","<<y<<","<<z<<","<<"is equal"<<endl;
	
}
