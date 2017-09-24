#include<iostream>
using namespace std;
int main()
{
	int num,max_value,rand_num;
	cout<< "\nEnter the number of random numbers you want : ";
	cin>>num;
	cout<<"\nEnter the maximum value of random number :";
	cin>>max_value;
	cout<<"\nRandom numbers from 0 to "<<max_value<<"are :"<<endl;
	for(int i=0;i<=num;i++)
	{
		rand_num=rand_num%max_value;
		cout<<rand_num<<endl;
	}
	return 0;
}
