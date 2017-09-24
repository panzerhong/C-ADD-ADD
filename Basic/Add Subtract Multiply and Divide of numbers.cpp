#include<iostream>
using namespace std;
int main{
	
	int num1,num2,add,sub,mul;float div;
	
	cout<<"Enter any two Number :\n";
	cin>>num1>>num2;
	add=num1+num2;sub=num1-num2;mul=num1*num2;div=num1/num2;
	
	//typecasting num2 to float
	
	cout<<"Addition of two number is ="<<add<<"\n";
	cout<<"Subtraction of two number is ="<<sub<<"\n"<<endl;
	cout<<"Multiplication of the two number is ="<<mul<<"\n"<<endl;\
	cout<<"Division of the two number is = "<<div<<"\n";
	return 0;
}
