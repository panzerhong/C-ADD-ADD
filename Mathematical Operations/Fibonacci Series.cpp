/*#include<iostream>
using namespace std;

int main()
{
	int num,first = 0,second = 1, next;
	cout<<"Enter the number of terms in series:";
	cin>>num;
	cout<<"\nFibonacci series is:\n";
	for(int i=0;i<num;i++)
	{
		if(i<=1)\
		{
			next =i;
		}
		else
		{
			next = first + second;
			first =second;
			second = next;
		}
		cout<<next<<"\n";
	}
	return 0;
}*/

// using Recursion
#include<iostream>
using namespace std;
int fib(int);
int Fibonacci(int);
int main()
{
	int innum,n=0,i;
	cout<<"Enter the number"<<endl;
	cin>>innum;
	for(i=1;i<=innum;i++)
	{
			cout<<fib(n)<<"\n";
			n++;	
	}
	return 0;
}

int fib(int n)
{
	if(n==0)
	return 0;                              
	else if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
