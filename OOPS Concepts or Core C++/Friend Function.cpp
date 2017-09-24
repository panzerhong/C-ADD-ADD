#include<iostream>
using namespace std;

class Mea
{
	int n1,n2;
	public :
		void get_value()
		{
			cout<<"\nEnter any two numbers to calculate mean : ";
			cin>>n1>>n2;
		}
		
		friend float mean(Mea m);
};

float mean(Mea m)
{
	return float(m.n1 + m.n2)/2.0;
}

int main()
{
	Mea m;
	m.get_value();
	cout<<"\nMean value of numbers is : "<<mean(m);
	return 0;
}
