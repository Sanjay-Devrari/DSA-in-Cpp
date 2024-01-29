#include<iostream>
using namespace std;
int main()
{
  int size;
  cout<<"Enter Size of Array =";
  cin>>size;
  int arry[size];
  for(int i=0;i<size;i++)
    {
      cin>>arry[i];
    }
  for(int i=0;i<size;i++)
    {
      cout<<arry[i];
    }
  return 0;
}
