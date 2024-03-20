#include<iostream>
using namespace std;
int main()
{
  int i=5;
  int *ptr=&i;
  // Print Address of i
  cout<< ptr<<endl;
  // Print value of i
  cout<< *ptr<<endl;
  return 0;
}
