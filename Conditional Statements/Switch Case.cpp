#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"Enter the grade obtained(A or B or C or D or E):\n";
	std::cin>>grade;
	switch(grade)
	{
		case 'A': cout<<"Excellent\n"<<endl;break;
		case 'B': cout<<"Well done\n"<<endl;break;
		case 'C': cout<<"Average\n"<<endl;break;
		case 'D': cout<<"Nearly Failed\n"<<endl;break;
		case 'E': cout<<"Better try again\n"<<endl;break;
		default:
			cout<<"Invalid grade.\n"<<endl;
	}
	return 0;
}
