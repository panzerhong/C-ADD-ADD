#include<iostream>
using namespace std;
int main()
{
	int x=30;
	int y=75;
	switch(x)
	{
		case 30:
			cout<<"This is Outer Switch case.Value of x is 30"<<endl;
			switch(y)
			{
				case 70:
					cout<<"This isn Inner Switch case.Value of y is 75"<<endl;
			}
	}
}
