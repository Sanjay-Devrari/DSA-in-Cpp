#include<iostream>
using namespace std;
int Binary(int arry[],int size,int num)
{
	int s=0;
	int e=size;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arry[mid]==num)
		{
			return mid;
		}
		else if(arry[mid]>num)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
int main()
{
	int size;
	cout<<"Enter Size of Array=";
	cin>>size;
	int arry[size];
	for(int i=0;i<size;i++)
	{
		cin>>arry[i];
	}
	int num;
	cout<<"Enter numbre which are you find in array=";
	cin>>num;
	cout<<"Index of Your find number in Array :-\n"<<Binary(arry,size,num);
}
