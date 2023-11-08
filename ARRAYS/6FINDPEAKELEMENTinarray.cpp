#include<iostream>
using namespace std;
int findpeakelt(int a[],int l,int r, int n)
{
	int m=(l+r)/2;
	if((m==0 || a[m-1]<=a[m]) && ( m==n-1 || a[m+1]<=a[m]))
	return m;
	else if (m>0 && a[m-1]>a[m])
	return findpeakelt(a,l,m-1,n);
	else
	return findpeakelt(a,m+1,r,n);
}
int findpeak(int a[],int n)
{
	return findpeakelt(a,0,n-1,n);
}

int main()
{
	int a[]={1,3,20,4,1,8};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<" index of the peak point is -> "<<findpeak(a,n);
	return 0;
}