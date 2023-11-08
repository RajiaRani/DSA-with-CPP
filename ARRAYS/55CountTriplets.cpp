#include<iostream>
using namespace std;
int CountTriplets(int a[], int n,int sum)
{
	
int i, j,k;
for(i=0;i<n-2;i++)
{
	for(j=i+1;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(a[i]+a[j]+a[k]==sum)
			{
				cout<<"Triplets is "<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")";
				return true;
			}
		}
	}
}
return false;
}
int main()
{
	int a[]={5,1,3,4,7};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=12;
	CountTriplets(a,n,sum);
	return 0;
}
//time=o(n)3
//space=o(1)