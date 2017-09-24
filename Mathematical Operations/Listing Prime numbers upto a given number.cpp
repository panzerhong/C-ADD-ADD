#include<iostream>
using namespace std;

int prime_list(int);
int main()
{
	
	int i,num,list;
	
	cout<<"\nEnter the number upto which you want prime numbers:";cin>>num;
	
	cout<<"\nPrime numbers upto "<<num<<"are :\n";
	
	for(i=0;i<num;i++)
	{
		list = prime_list(i);
		// if is prime then it will return 1
		if(list == 1)
		cout<<i<<"\n";
	}
	return 0;
}

int prime_list(int n)
{
	int i;
	// Starting from2 , if no is completely divisible by any no then it is not prime 
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		return 0;1
	}
	if(i==n)
	return 1;
}
