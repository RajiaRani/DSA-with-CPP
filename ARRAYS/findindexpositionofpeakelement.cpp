#include<iostream>
using namespace std;
int peakelement(int a[],int l, int r, int n)
{
	int m=(l+r)/2;
	if((m==0 || a[m-1]<a[m]) && (m==n-1 || a[m+1]<a[m]))
	return m;
	else if (m>0 && a[m-1]>a[m])
	return peakelement(a,l,m-1,n);
	else
	return peakelement(a,m+1,r,n);
}
int peakpoint(int a[],int n)
{
	return peakelement(a,0,n-1,n);
}
int main()
{
	int a[]={1,22,20,56,2,89};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Index of the peak elt is = "<<peakpoint(a,n);
	return 0;
}