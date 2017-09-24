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
	personal_details user1,user2;
	cout<<"\nUser1 ";
	cout<<"\nEnter your Full name : ";
	cin>>user1.name;
	
	cout<<" \nEnter your address: ";
	cin>>user1.address;
	
	cout<<"\nEnter your contact number : ";
	cin>>user1.contact_no;
	
	cout<<"\nUser2";
	cout<<"Enter your full name : ";
	cin>>user2.name;
	cout<<"Enter your address name : "<<endl;
	cin>>user2.address;
	cout<<"Enter your contact no";
	cin>>user2.contact_no;
	
	cout<<"Displaying"<<endl;
	
	cout<<"\nUser 1 name : "<<user1.name<<"User 1 address : "<<user1.address<<"User 1 contact_no : "<<user1.contact_no;
	cout<<"\n\nUser 2 name : "<<user2.name<<"User 2 address : "<<user2.address<<"User 2 contact_no : "<<user2.contact_no;
}
