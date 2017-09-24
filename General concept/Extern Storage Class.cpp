#include<iostream>
using namespace std;
int 	PrintCount();
int count = 10;//Definition of variable count

extern int PrintCount();
int main()
{
	cout<<"Initial count is : "<<count<<endl;
	PrintCount();
	return 0;
}

