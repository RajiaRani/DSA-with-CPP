#include<iostream>
using namespace std; 
bool findpair(int a[],int n,int sum)
{
	for(int i=0;i<n;i++)
	{
		for(int j=j+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
			return 1;
		}
		}
	}
	return 0;
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int s=14;
	int n=sizeof(a)/sizeof(a[0]);
	
	 (findpair(a,n,s))?cout<<"YES":cout<<"NO";
	return 0;
	}