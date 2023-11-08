//Count triplets with sum smaller than a given value
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int countTriplets(int a[], int n, int x)
{
	int ans=0;
	int i, j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			if(a[i]+a[j]+a[k]<x)
			ans++;
		}
	}
	return ans;
}
int main()
{
int a[]={5,1,3,4,7};
int n=sizeof(a)/sizeof(a[0]);
int x=12;
cout<<countTriplets(a,n,x);
return 0;
}