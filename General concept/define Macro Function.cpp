#include<iostream>
using namespace std;
#define max_num(a,b) ((a)>(b)? (a):(b))

int main()
{
	int d,e;
	cout<<"Enter any two numbers to find maximum of : ";
	cin>>d>>e;
	d=max_num(d,e);
	cout<<"\nMaximum of two number is : "<<d<<endl;
	return 0;
}
