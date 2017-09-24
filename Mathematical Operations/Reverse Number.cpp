#include<iostream>
using namespace std;
// Reverse Number
int main()
{
	int inputnum,sum,reminder;
	
	cout<<"Enter Number : "<<endl;cin>>inputnum;
	cout<<"Before Reversing : "<<inputnum;
	while(inputnum>0)
	{
		reminder = inputnum%10;
		inputnum/=10;
		sum=sum*10+reminder;
	}
	cout<<"\n\nAfter reversing"<< sum<<endl;
}
