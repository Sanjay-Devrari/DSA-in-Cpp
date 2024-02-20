#include<iostream>
using namespace std;
int MaximumNumber(int arr[],int n)
{
	int i=0;
	int max=arr[i];
	for(i;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int MinimumNumber(int arr[] ,int n)
{
	int i=0;
	int min=arr[i];
	for(i;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int main()
{
	int arr[]={1,8,9,5,10};
	int n=5;
	cout<<"Maximum element is "<<MaximumNumber(arr,n)<<endl;
	cout<<"Minimum element is "<<MinimumNumber(arr,n);
}
