//count the triplets with sum greater than the given value
#include<iostream>
using namespace std;
int tripletgreaterX(int a[], int n, int x)
{
	int ans=0;
	int i,j,k;
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
	int a[]={2,5,1,8,6,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int x=12;
	cout<<tripletgreaterX(a,n,x);
	return 0;
}