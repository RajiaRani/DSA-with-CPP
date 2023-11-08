#include<iostream>
using namespace std;
int binarysearch(int a[],int l,int r)
{
	if(r>=l)
	{
	int m=(l+r)/2;
		if(m==a[m])
		return m;
		if(m>a[m])
		return binarysearch(a,(m+1),r);
		else
		return binarysearch(a,(m-1),l);
	}
	return -1;
}
int main()
{
	int a[]={-1,-2,0,2,4,6,9,8,10};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<binarysearch(a,0,n-1);
	return 0;
}