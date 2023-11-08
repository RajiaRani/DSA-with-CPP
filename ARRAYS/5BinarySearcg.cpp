#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarysearch(int a[], int l,int r)
{
	if(r>=l)
	{
		int m=(l+r)/2;
		if(m==a[m])
		return m;
     if(m>a[m])
     return binarysearch(a,(m+1),r);
     else
     return binarysearch(a,l,(m-1));
	}
	return -1;
	
}
int main()
{
	int a[]={-10,-1,0,3,10,11,30,50,100};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<binarysearch(a,0,n-1);
	return 0;
}