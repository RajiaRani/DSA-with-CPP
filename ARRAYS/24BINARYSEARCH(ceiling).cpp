#include<iostream>
using namespace std;
int CS(int a[], int l, int r, int x)
{
	if(x<=a[l])
	return l;
	if(x>a[r])
	return -1;
	int m=(l+r)/2;
	if(a[m]==x)
	return m;
	else if(a[m]<x)
	{
		if(m+1<=r && a[m+1]>=x)
		return m+1;
		else
		return CS(a,m+1, r, x);
	}
	else
	{
		if(m-1>=l && a[m-1]<x)
		return m-1;
		else
		return CS(a,l,m-1,x);
	}
}
int main()
{
	int a[]={1,2,8,10,10,12,19};
	int n=sizeof(a)/sizeof(a[0]);
	int x=20;
	int index=CS(a,0,n-1,x);
	if(index==-1)
	cout<<"ceiling of "<<x<<"is does not exists";
	else
	cout<<"ceiling of"<<x<<" is"<<a[index];
	return 0;
}