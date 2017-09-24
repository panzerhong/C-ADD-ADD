#include<iostream>
using namespace std;
int main()
{
	int num, remainder;
	int sum = 0;
	cout<<"Enter an Number : \n"<<endl;
	cin>>num;
	while(num!=0)
	{
		remainder=num%10;
		num/=10;
		sum+=remainder;
	}
	cout<<"The sum of adding digit number is "<<sum<<endl;
}

