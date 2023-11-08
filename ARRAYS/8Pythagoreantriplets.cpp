#include<iostream>
using namespace std;
bool findtriplets(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				int x,y,z;
				x=a[i]*a[i];
				y=a[j]*a[j];
				z=a[k]*a[k];
				if(x==y+z || y==x+z || z==x+y)
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int a[]={3,1,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	findtriplets(a,n)? cout<<"YES" : cout<<"NO";
	return 0;
}