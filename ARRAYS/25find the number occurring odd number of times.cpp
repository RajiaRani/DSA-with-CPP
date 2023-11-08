#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find the number occurring odd number of times
int oddnumberoccurence(int a[], int n)
{
	int r=0;
	for(int i=0;i<n;i++)
	r=r^a[i];	
	return r;
}
int main()
{
	int a[]={1,2,3,2,3,3,1};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<oddnumberoccurence(a,n);
	return 0;
}