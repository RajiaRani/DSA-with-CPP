#include<iostream>
using namespace std;
int CountTriplets(int a[], int n, int sum)
{
	int i,j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]>=sum)
				{
					cout<<"Triplets is = "<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")";
					return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	int a[]={2,4,6,10,11,15,18};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=34;
	CountTriplets(a,n,  sum);
	return 0;
}