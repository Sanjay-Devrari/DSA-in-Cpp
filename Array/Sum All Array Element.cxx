#include<iostream>
using namespace std;
int Sum(int arr[],int n){
	int result=0;
	for(int i=0;i<n;i++){
		result=result+arr[i];
		}
		return result;
	}
int main()
{
	int n;
	cout<<"Enter Size Of Array:-\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
		cout<<"Sum of Your All Array Element :-\n";
		cout<<Sum(arr,n);
}