#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of Array :-\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=0;
	for(int s=1;s<n;s++)
	{
		if(arr[j]<arr[s])
		{
			j=s;
		}
		cout<<"Max till  "<<arr[j]<<"  \n";
	}
	
}