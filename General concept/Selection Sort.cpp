#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i,j,position,swap;
	cout<<"Enter number of elements in arrray:\n";
	cin>>n;
	cout<<"Enter the elements in an array : \n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n-1;i++)
	{
		position = i;
		for(j=i+1;j<n;j++)
		{
			if (arr[position]>arr[j])
			position = j;
		}
		if(position!=i)
		{
			swap = arr[i];
			arr[i] = arr[position];
			arr[position ]=swap;
		}
	}
	cout<<"Sorted array is : \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;
}
