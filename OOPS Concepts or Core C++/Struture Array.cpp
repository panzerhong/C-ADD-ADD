#include<iostream>
using namespace std;
struct personal_details
{
	char name[100];
	char address[100];
	long contact_no;
};
int main()
{
	struct personal_details user[5];
	for(int i = 0;i<5;i++)
	{
		cout<<"\nUser "<<i<<endl;
		cout<<"\nEnter User "<<i<<" name : ";cin>>user[i].name;
		cout<<"\nEnter User "<<i<<" address : ";cin>>user[i].address;
		cout<<"\nEnter User "<<i<<" contact_no : ";cin>>user[i].contact_no;
	}
	cout<<"\nDisplaying"<<endl;
	for(int i = 0;i<5;i++)
	{
		 cout<<"\nUser "<<i<<endl;
		 cout<<"\nUser "<<i<<" name : "<<user[i].name;
		 cout<<"\nUser "<<i<<" address : "<<user[i].address;
		 cout<<"\nUser "<<i<<" contact_no : "<<user[i].contact_no;
		 cout<<"\n\n"<<endl;
	}
}
