#include<iostream>
using namespace std;

int main()
{
	int innum,x, sum=0,remainder;
	
	cout<<"\nEnter any Number";cin>>innum;x=innum;
	while(innum>0)
	{
		remainder=innum%10;
		innum/=10;
		sum=sum+remainder*remainder*remainder;
	}
	if(sum==x)
	cout<<x<<" is Armstrong number"<<endl;
	else
	cout<<x<<" is not Armstrong number"<<endl;
}
