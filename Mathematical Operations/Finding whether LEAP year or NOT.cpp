#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\nEnter a year to check if it is a leap year:";cin>>year;
	
	if(year%400==0)
	{
		cout<<"\n"<<year<<"is a leap year.\n";
		
	}
	else if (year%100==0)
	{
		cout<<"\n"<<year<<"is not a leap year.\n";
	}
	else if (year%4==0)
	{
		cout<<"\n"<<year<<" is not a leap year.\n";
	}
	return 0;
}
