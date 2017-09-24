#include<iostream>
using namespace std;
void swap(int *a,int*b);//function declaration
int main()
{
	int num1, num2;
	cout<<"enter the numbers to be swapped : \n";
	cin>>num1>>num2;
	
	swap(&num1,&num2);//passing value to function
	
	cout<<"\nAfter swapping numbers , \nValue of first number is : "<<num1;
	cout<<"\nValue of secound number is : "<<num2;
	return 0;
}

//function defination
void swap (int*num1,int*num2)
{
	int temp;
	
	temp = *num1;
	*num1=*num2;
	*num2=temp;
}
