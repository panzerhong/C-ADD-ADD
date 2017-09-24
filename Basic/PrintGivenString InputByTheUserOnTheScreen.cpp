#include<iostream>
using namespace std;
main()
{
	char strArray[100];//variable definiton and initialization
	
	cout<< "Enter a String you wnat to print:"<<endl;
	cin>>strArray;
	cin.getline(strArray,80);
	
	cout<<"The String Entered is : "<<strArray<<endl;
	return 0;
}
