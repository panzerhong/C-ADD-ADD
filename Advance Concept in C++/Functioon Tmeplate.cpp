#include<iostream>
using namespace std;
template<class T>
void swapping(T&a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	cout<<"Enter value of a and b : ";cin>>a>>b;
	
	swapping(a,b);
	
	cout<<"\nValueds after swapping : ";
	cout<<"\n a = "<<a<<"b="<<b;
	
	return 0;
}
