//find 3 numbers whose sum is equal to the given number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find3number(int a[], int n, int x)
{
	sort(a,a+n);
	for(int i=0;i<n-2;i++)
	{
		int l=i+1;
		int r=n-1;
		while(l<r)
		{
			if(a[i]+a[l]+a[r]==x)
			{
				cout<<a[i]<<","<<a[l]<<","<<a[r]<<endl;
				return true;
			}
			
			else if(a[i]+a[l]+a[r]<x)
			l++;
			else //(a[i]+a[l]+a[r]>x)
			r--;
		}
	}
	return false;	
}
int main() 
{
	int a[]={1,3,2,5,8,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	int x=15;
	cout<<find3number(a,n,x);
	return 0;
}