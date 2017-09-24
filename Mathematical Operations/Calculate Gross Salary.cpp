#include<iostream>
using namespace std;
int main()
{
	int gross_salary,basic,da,ta;
	cout<<"\nEnter your basic salary:";cin>>basic;
	da = (10*basic)/100;
	ta = (12*basic)/100;
	gross_salary = basic + da + ta;
	
	cout<<"\n Your Gross salary is :"<<gross_salary;
	return 0;
}
