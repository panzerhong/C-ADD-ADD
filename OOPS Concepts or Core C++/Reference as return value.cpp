#include<iostream>
#include<ctime>	/* Interprets the value by timers as a calendar]
 time and converts it to a C-string containging a human-readable
  version of the corresponding time and date, in terms of local 
  time.*/

using namespace std;
char str[] = {'z','b','d','e','f'};

char&setValues (char i)
{
	return str[i];//return a reference
}

int main()
{
	cout<<"Before making changes : "<<endl;
	
	for (int i = 0;i<6;i++)
	{
		cout<<"str [" << i<<"] = ";
		cout<<str[i]<<endl;
	}
	
	setValues(0)='a';//change 2nd element
	setValues(2)='c';//change 4th element
	
	cout<<" After making changing : "<<endl;
	
	for(int i=0;i<6;i++)
	{
		cout<<"str["<<i<<"] = " ;
		cout<<str[i]<<endl;
	}
	return 0;
}


