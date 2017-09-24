#include<iostream>
using namespace std;
int main()
{
	int innum,num[10],i;
	cout<<"Enter the quantity of number"<<endl;
	cin>>innum;
	cout<<"Enter the value of each number"<<endl;
	for(i=1;i<=innum;i++)
	{
		cin>>num[i];
	}
	i--;
	cout<<"\n"<<endl;
	for(i=innum;i>=1;i--)
	{
		if(num[i]%2==0)
		{
			cout<<num[i]<<"is even number."<<endl;
		}
		else
		cout<<num[i]<<"is odd number."<<endl;
	}
}
