#include<iostream>
using namespace std;
int hcf(int,int);

int main()
{
	int n1,n2;
	cout<<"\n Enter two numbers:\n";cin>>n1>>n2;
	cout<<"\n Highest Comomon Factor (HCF or GCD) of "<< n1<<" and "<< n2<<" is:"<<hcf(n1,n2);
	return 0; 

}
 int hcf(int n1,int n2)
 {
 	if(n2!=0)
 	return hcf(n2,n1%n2);
 	else
 	return n1;
 }
