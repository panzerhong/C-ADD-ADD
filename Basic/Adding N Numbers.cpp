#include<iostream>
using namespace std;

int main()
{
	int i,n=0,num,sum=0,c,value;
	cout<<"Enter the number of intergers you want to add:\n";
	cin>>num;

	cout<<"You have entered number"<<num<<"\n";

	for(i=1;i<=num;i++)
	{
		cin>>n;
		sum=sum+n;
	}
	cout<<"Addition of enterd number is = "<<sum<<"\n";
	return 0;
}
