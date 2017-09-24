#include<iostream>
using namespace std;
int main()
{
	int *ptr[6];
	int p =10,q=9,r=8,s=7,t=6,u=5;
	int i;
	// initialize array pointers by making them point to 5 different ints
	ptr[0]=&p;
	ptr[1]=&q;
	ptr[2]=&r;
	ptr[3]=&s;
	ptr[4]=&t;
	ptr[5]=&u;
	
	for(i=0;i<5;i++)
	{
		cout<<"The pointer ptr ["<<i<<"] point to "<<*ptr[i]<<endl; cout<<"\n";
	}
	cout<<"\n";
		cout<<"The base address of the array ptr of pointers is "<<ptr<<"\n";
		for(i=0;i<6;i++)
		{
			cout<<"The address stored in ptr["<<i<<"] is "<<ptr[i]<<"\n";
			
		}
		return 0;
}
