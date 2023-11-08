#include<iostream>
using namespace std;
int findincsubarray(int a[],int n)
{
	int count=0;
	int length=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		length++;
	
	else 
	{
		count=count+((length-1)*length)/2;
		length=1;
	}
}
	if(length>1)
	
		count=count+(length*(length-1)/2);
		return count;
	
}
int main()
{
	int a[]={1,2,3,4,3};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<" strickly increasing subarray is ->"<< findincsubarray(a,n);
	return 0;
}