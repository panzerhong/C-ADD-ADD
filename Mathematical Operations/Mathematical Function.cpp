#include<iostream>
#include<cmath>

#define PI	3.14159265
using namespace std;
int main()
{
	int num1 =30,
		x,y,
		num2 = 180,
		num3 = 100,
		num4=1024,
		num5=3;
	double num6=-5.56;
		
	// mathematical operations;
	
	cout<<"sqrt (num4) : "<<sqrt(num4)<<endl;	// Rers kare ney 1024, Square Root of num4 which num4 = 1024
	
	cout<<"\npow(num5,2) : "<<pow(num5,2)<<endl;	// Power number
	
	
	
	// abs is function to convert all of the negative to positive number.
	// abs=absoulte() function returns the absolute value. EX: abs(-87.91) = |-87.91| = 87.91
	cout<<"\n\nabs(num2) : "<<abs(num6)<<endl;
	
	
	
	// floor() funtion takes a single argument and returns a value
	// of type double, float or long double type. This function 
	//is defined in (cmath) header file.
	//FLOOR() FUNCTION RETURNS THE LARGES POSSIBLE INTERGER VALUE WHICH IS LESS THAN OR EQUAL TO THE GIVEN ARGEMENT 
	cout<<"\n\nFloor(5.56) is "<<floor(num6)<<endl; // The output is 5
	
	
	//log() = logaric korl e
	cout<<"\n\nLog(7.3890560989) mean log korl e of 7.3890560989"<<"="<<log(7.3890560989)<<endl;
	
	
	// Not yet convering degree
	cout<<"\n\nSin(90) = "<<sin(90)<<endl;
	// converting degree to radian
	cout<<"\n\nSin(90*3.14159/180) = "<<sin(90*3.14159/180)<<endl;
	return 0; 
}
