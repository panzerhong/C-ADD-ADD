#include<iostream>
using namespace std;

// Calculate LCM
int main()
{
	int n1,n2,max;
	
	cout<<"\nEnter two numbers:\n";
	cin>>n1>>n2;
	
	max=(n1>n2)? n1:n2;	//maximum value between n1 and n2 is stored in max
	
	do
	{
		if(max%n1==0&&max%n2==0)
		{
			cout<<"\n Least Common Multiple (LCM) of"<<n1<<"and"<<n2<<"="<<max;
			break;
		}
		else
		++max;
	}while(true);
	
	return 0;
}
