#include<iostream>
using namespace std;
int find(int arr[],int n,int t){
	int start=0;
	int end=n-1;
	int mid=(s+e)/2;
	while(s<=e){
		if(arr[mid]==t){
			return mid;
			}
		if(t>arr[mid]){
			start=mid+1;
			}
		else{
			end=mid-1;
			}
			mid=(s+e)/2;
		}
		return e;
	}
int main(){
	int n=4;
	int nums[4] = {1,3,5,6};
	int  target = 7;
	cout<<"Index of Target Element:-\n";
	cout<<find(nums,n,target);
	}
