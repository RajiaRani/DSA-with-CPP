#include<iostream>
using namespace std ;
int ceilsearch(int a[], int l, int r,int x)
{
	int m;
	if(x<=a[l])
	return l;
	if(x>=a[r])
	return -1;
	m=(l+r)/2;
	if (a[m]==x)
	return m;
	else if(a[m]<x)
	{
		if(m+1<=r && a[m+1]>=x)
		return m;
		else
		return ceilsearch(a,m+1,r,x);
		
	}
	else
	{
		if(m-1>=l && a[m-1]>x)
		return m-1;
		else
		return ceilsearch(a,l,m-1,x);
		
	}
}
int main()
{
	int a[]={1,2,8,10,10,12,19};
	int n=sizeof(a)/sizeof(a[0]);
	int x=11;
	int index=ceilsearch(a,0,n-1,x);
	if(index==-1)
	cout<<"ceiling of "<<x<<" does not exist in the array "<<endl;
	else
	cout<<"ceiling of "<<x<<" is "<<a[index];
	return 0;
}