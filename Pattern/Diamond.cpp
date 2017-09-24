#include<iostream>
using namespcae std;
int main()
{
	int n,j,k=1;
	cout<<"Enter number of rows : \n";
	cin>>n;
	
	k=n-1;
	
	//printing upper half part of diamond
	
	for(i=1;i<=n;i++)
	{
		//leaving space before printing
		for(j=1;j<=k;j++)
		{
				cou<<" ";
				k--;
				
				for(j=1;j<=2*i-1;j++)
				cout<<"*";
				cout<<"\n";
		}
		k=1;
		
		//printing lower half part for diamond
		for(i=1;i<=n-1;i++)
		{
			//leaving space before printing *
			for(j=1;j<=k;j++)
				cout<<" ";
				k++;
				
				for(j=1;j<=2*(n-i)-1;j++)
				cout<<"*";
				cout<<"\n";
			
		}
	
		
	}
	
}
