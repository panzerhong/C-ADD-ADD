#include<iostream>
using namespace std;
int main()
{
	int x,innum,reminder,sum=0;
	cout<<"Enter the number"<<endl;cin>>innum;x=innum;
	do
	{
		reminder=innum%10;
		innum/=10;
		sum=sum*10+reminder;
	}
	while(innum!=0);
	
	if (sum==x)
	{
		cout<<x<<" is palindrome number"<<endl;
	}
	else
	cout<<x<<" is not palindrome number"<<endl;
}
