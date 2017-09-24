/*#include<iostream>
int factor(int);
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number To find its Factorial: ";
	cin>>num;
	cout<<factor(num)<<" is a result of exercise."<<endl;
}

int factor(int n)
{
		int re=0;
		if(n==0)
		return 1;
		else
		return n*factor(n-1);
}
*/
#include<iostream>
int factor(int);
using namespace std;
int main()
{
	int num,re=1,i;
	cout<<"Enter the Number"<<endl;cin>>num;
	for(i=1;i<=num;i++)
	{
		re*=i;
	}
	cout<<re<<" is the output"<<endl;
}
