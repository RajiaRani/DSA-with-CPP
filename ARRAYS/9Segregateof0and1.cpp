#include<iostream>
using namespace std;
int segregate0and1(int a[],int n){
	int l=0;
	int r=n-1;
	while(l<r)
	{
		while(a[l]==0 && l<r)
		l++;
		while(a[r]==1 && l<r)
		r--;
	
	while(l<r)
	{
		a[l]=0;
		a[r]=1;
		l++;
		r--;
	}
}
}
int main()
{
	int a[]={1,0,1,0,0,0,1,1,1,0,0,1,0};
	int n=sizeof(a)/sizeof(a[0]);
	segregate0and1(a,n);
	cout<<"Array after segregation";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	return 0;
}