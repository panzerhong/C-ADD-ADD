#include<iostream>
using namespace std;

long factorial(int);

long find_npr(int,int);

int main()
{
	int n, r;
	long ncr,npr;
	cout<<"Enter the value of n and r: \n";cin>>n>>r;
	ncr=find_ncr(n,r);
	npr=find_npr(n,r);
	cout<<n<<"C"<<r<<"="<<npr<<"\n";
	return;
}

long find_ncr(int n,int r)
{
	long result;
	result=factorial(n)/factorial(n-r);
	
}
