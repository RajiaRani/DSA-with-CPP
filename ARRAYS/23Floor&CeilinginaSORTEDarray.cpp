#include<iostream>
using namespace std;
int searchceiling(int a[], int n, int x)
{
	if(x<=a[0])
	return a[0];
	for(int i=0;i<n;i++)
{
	if(a[i]==x)
	return i;
	if(a[i]<x && a[i+1]>x)
	return i+1;
}
return -1;
}
int main()
{
	int index;
	int a[]={1,2,8,10,10,12,19};
	int n=sizeof(a)/sizeof(a[0]);
	int x=3;
	
	index=searchceiling(a,n,x);
	if(index==-1)
	cout<<"index of "<<x<<" does not exist ";
	else
	cout<<" index of "<<x<<"is"<<a[index];
	return 0;
}