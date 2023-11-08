#include<iostream>
using namespace std;
int getmaxfromright(int a[],int size)
{
	int maxfromright=(size-1);
	a[size-1]=-1;
	for(int i=(size-2);i>=0;i--)
	{
		int temp=a[i];
		a[i]=maxfromright;
		if(maxfromright<temp)
		{
			maxfromright=temp;
		}
	}
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int a[]={12,3,45,6,77,89,2,11,15,18,19};
	int n=sizeof(a)/sizeof(a[0]);
	getmaxfromright(a,n);
	printarray(a,n);
	return 0;
	
}