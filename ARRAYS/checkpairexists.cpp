#include<iostream>
#include<algorithm>
using namespace std;
bool checkpairexists(int a[],int n, int sum)
{
	int l,r;
	sort(a,a+n);
	l=0;
	r=n-1;
	while(l<r)
	{
		while(a[l]+a[r]==sum)
		return 1;
		if(a[l]+a[r]<sum)
		l++;
		else
		r--;
	}
	
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int s=1;
	checkpairexists(a,n,s)?cout<<"YES" :cout<<"NO";
	return 0;
}