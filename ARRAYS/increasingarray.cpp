#include<iostream>
using namespace std;
int findsubarray(int a[],int n)
{
	int c=0; int l=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		l++;
		else
		{
		c+=(((l-1)*l)/2);
		l=1;
	}
	}
	if(l>1)
	
		c+=(((l-1)*l)/2);
		return c;
	
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"stirckly increasing subarray -> "<<findsubarray(a,n);
		return 0;
}