#include<iostream>
using namespace std;

extern int count;//declare variable 

void PrintCount()
{
	while (count!=0)
	{
		cout<<"\nCount is : "<<count;
		--count;
	}
}
