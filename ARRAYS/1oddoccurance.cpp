#include<iostream>
using namespace std;
int getoddoccurance(int a[],int n)
{
	int r;
	for(int i=0;i<n;i++)
	r=r^a[i];
	return r;
}
int main()
{
	int a[]={2,3,5,4,5,2,4,3,5,2,4,4,2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<getoddoccurance(a,n);
	return 0;
}