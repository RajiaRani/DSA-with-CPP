#include<iostream>
using namespace std;
int countincreasing(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[j-1])
			count++;
			else 
			break;
		}
	}
	return count;
	
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<" strickly increasing subarray is - "<<countincreasing(a,n);
	return 0;
}