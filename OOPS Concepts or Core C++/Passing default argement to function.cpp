#include<iostream>
using namespace std;
void display(char='C',int = 10);
// Passing Default Argument to a function
int main()
{
	cout<<"No argument is passed to the function : \n";
	display();
	
	cout<<"Single argment is passed to the function: \n";
	display('+');
	
	cout<<"Both argement are passed to the function : \n";
	display('+',5);
	 
	 return 0;
}
void display(char c, int n)
{
	for(int i=1;i<=n;++i)
	{
		cout<<c;
	}
	cout<<endl;
}
