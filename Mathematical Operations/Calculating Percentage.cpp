#include<iostream>
using namespace std;
int main()
{
	int qs,score[100],i=0,sum=0;float average=0;
	cout<<"Enter the quantity of subject"<<endl;
	cin>>qs;
	cout<<"Enter the score of each quantity"<<endl;
	do
	{
		cin>>score[i];
		i++;
		qs--;
	}while(qs>0);
	i--;
	while(i>=0)
	{
		sum+=score[i];
		i--;
		qs++;
	}
	average=sum/qs;
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average = "<<average<<endl;
}
