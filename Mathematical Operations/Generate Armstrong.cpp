#include<iostream>
using namespace std;
int armfunc(int);
// Generate Armstrong Number
int main()
{
	int i,listarm,innum;
	cout<<"Enter any number upto which you want Armstrong numbers: "<<endl;
	cin>>innum;
	for(i=1;i<=innum;i++)
	{
		armfunc(i);
	}
}

int armfunc(int n)
{
	int k=0,remainder=0,sum=0;
	
	k=n;

		while(k>0)
		{
			remainder=k%10;
			k=k/10;
			sum=sum+remainder*remainder*remainder;
		}
		if(sum==n)
		cout<<sum<<"\n"<<endl;
		sum=0;
}
