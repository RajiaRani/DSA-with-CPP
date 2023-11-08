#include<iostream>
using namespace std;
int FindSum(int a[], int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return a[0];
	int ans=a[0]+FindSum(a+1,n-1);
	return ans;
	
}
int main()
{
	int a[]={3,2,5,1,6};
	int n= sizeof(a)/sizeof(a[0]);
    cout<<	FindSum(a,n);
	return 0;
}