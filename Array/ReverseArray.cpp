#include<iostream>
using namespace std;
void PrintArray(int arr[] ,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
void ReverseArray(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	PrintArray(arr,n);
}
int main()
{
	int arr[]={5,4,3,2,1};
	int n=5;
	ReverseArray(arr, n);
}
