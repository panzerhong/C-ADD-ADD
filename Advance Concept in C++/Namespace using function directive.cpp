#include<iostream>
using namespace std;
// defnine a namespace 
namespace operations
{
	int a, b, ans;
	int add(int a, int b)
	{
		return (a+b);
	}
	int multiply(int a, int b)
	{
		return (a*b);
	}
}

int main()
{
	using namespace operations;
	
	int n1,n2;
	cout<<"Addition of number . ";
	cout<<"\nEnter any two numbers : ";
	
	cin>>n1>>n2;
	cout<<"\nAddition of numbers is : "<<add(n1,n2)<<endl;
	cout<<"\nEnter any two numbers : ";
	cin>>n1>>n2;
	cout<<"\nMultiplication of numbers is : "<<multiply(n1,n2);
	
	return 0;
}
