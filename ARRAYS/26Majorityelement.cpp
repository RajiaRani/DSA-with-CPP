#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findnumber(int a[], int n)
{
	int count=1;
	int index=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]==index)
		count++;
		else
		count--;
		if(count==0)
		{
			index=a[i];
			count=1;
		}
	}
	return index;
}
bool isMajority(int a[],int n, int cand)
{
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]==count)
		count++;
		if(count>n/2)
		return 1;
		else
		return 0;
	}
}
void printmajority(int a[], int n)
{
	int cand=findnumber(a,n);
	if(isMajority(a,n,cand))
	cout<<" "<<cand<<" ";
	else
	cout<<" Majority does not exists";
}
int main()
{
	int a[]={3,3,4,2,4,4,2,4,4};
	int n=sizeof(a)/sizeof(a[0]);
	printmajority(a,n);
	return 0;
	
}