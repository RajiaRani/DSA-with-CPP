#include<iostream>
using namespace std;
int getoddoccurance(int a[],int n)
{
	int r=0;
	for(int i=0;i<n;i++)
	r=r^a[i];
	return r;
}
int main()
{
	int a[]={2,4,5,6,7,8,9,4,9,8,7,6,5,4,2,2,2,3,2,9,7};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<getoddoccurance(a,n);
	return 0;
}