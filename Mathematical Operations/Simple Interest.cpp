#include<iostream>
using namespace std;
int main()
{
	int p_amount;float rate,period,simple_intrest;
	
	cout<<"\nEnter Principal Amount : ";cin>>p_amount;
	cout<<"\nEnter Rate of Interest : ";cin>>rate;
	cout<<"\nenter Period : ";cin>>period;9
	
	simple_intrest = (p_amount*rate*period)/100;
	cout<<"\n\n Simple Interest is :"<<simple_intrest;
	return 0;
}
