#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countTriplets(int a[], int n, int sum)
{
	sort(a, a+n);
	int ans=0;
	int i, j, k;
	for(i=0;i<n-2;i++)
	{
		j=i+1;
		k=n-1;
	while(j<k)
	{
		if(a[i]+a[j]+a[k]>=sum)
		k--;
		else
		{
			ans=ans+(k-j);
			j++;
		}
	}
	}
	return ans;
 } 
int main()
{
	int a[]={5,1,3,4,7};
	int n=5;
	int sum=12;
	cout<<countTriplets(a,n,sum);
	return 0;
}