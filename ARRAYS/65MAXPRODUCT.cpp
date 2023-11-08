#include<iostream>
using namespace std;
void FindMaxProduct(int a[], int n)
{
	if(n<2)
	{
		cout<<" no pairs exists";
		return;
	}
	if(n==2)
	{
		cout<<a[0]<<" "<<a[1]<<" ";
		return ;
	}
	int a1=a[0];
	int a2=a[1];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]*a[j]>a1*a2)
			a1=a[i],a2=a[j];
		}
	}
	cout<<" Max product {"<<a1<<" "<<a2<<"}";
}
int main()
{
	int a[]={1,2,4,5,7,12,67,13,22};
	int n=sizeof(a)/sizeof(a[0]);
	FindMaxProduct(a,n);
	return 0;
}