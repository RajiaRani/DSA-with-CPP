//Count triplets with sum smaller than X
#include<iostream>
using namespace std;
int countTriplets(int a[],int sum,int n)
{
	int i,j,k;
	int ans=0;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			
				if(a[i]+a[j]+a[k]<sum)
				ans++;
			
		}
	}
	return ans;
}
int main()
{
int a[]={2,3,4,5,6,11,13,20};
int n=sizeof(a)/sizeof(a[0]);
int sum=20;
cout<<countTriplets(a,sum,n);
return 0;
}