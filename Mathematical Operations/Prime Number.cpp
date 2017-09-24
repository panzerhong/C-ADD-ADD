#include<iostream>
using namespace std;
// Check whether number is prime number or not.
int main()
{
	
	int innum,x,i=1,q=0;
	cout<<"Enter the number :"<<endl;cin>>innum;x=innum;
	while(i<x)
	{
		
		if(innum%i==0)
		{
			q++;
			if(q>2)
			{
				cout<<x<<" is not prime number"<<endl;
				exit;
			}
		}
		i++;
	}
	cout<<x<<" is prime number"<<endl;
}
