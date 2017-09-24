#include<iostream>
using namespace std;
int addition(int,int);		// Declaring Function
int substract(int, int);
int main()
{
	int num1,num2,add,sub;
	cout<<"Enter two numberws to add:";cin>>num1>>num2;
	
	//Funtion call
	add=addition(num1,num2);
	sub=substract(num1,num2);
	cout<<"\nAddition of numbers is = "<<add;
	cout<<"\nSubstraction of number is = "<<sub;
	return 0;
}
// funciton declaratory
int addition(int a,int b)
{
	int add;
	add = a+b;
	return add;
}
// funciton declaratory
int substract (int a, int b)
{
	int sub;
	sub = a-b;
	return sub;
}
