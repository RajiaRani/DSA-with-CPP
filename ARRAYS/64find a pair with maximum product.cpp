//find a pair with maximum product
//time=O(N)
//space=O(1)	
#include<iostream>
using namespace std;
int FindMaxProduct(int a[], int n)
{
	int max1=0;
	int max2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>=max2)
		{
			max2=a[i];
		}
	}
	return (max1*max2);
}
int main()
{
	int a[]={1,2,4,5,7,12,67,13,22};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<FindMaxProduct(a,n);
	return 0;
}