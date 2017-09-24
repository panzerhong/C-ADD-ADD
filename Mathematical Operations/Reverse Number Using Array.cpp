#include<iostream>
using namespace std;
// Reverse Number Using Array
int main()
{
	int innum,i,reverse[100],j;
	cout<<"kkkkkkkkkkkkkkkkkkkkkkkkkkkk"<<endl;
	cout<<"Enter fuck you killer number : "<<endl;cin>>innum;
	while(innum!=0)
	{
		reverse[i]=innum%10;
		innum/=10;
		i++;
	}
	cout<<"\nAfter Reversing"<<endl;
	reverse[i]='\0';
	for(j=0;j<i;j++)
	{
			cout<<reverse[i]<<endl;
	}

}
