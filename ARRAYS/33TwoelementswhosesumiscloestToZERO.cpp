#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SumoftwoNum(int a[], int n)
{
	int sum;

	if(n<2)
	{
		cout<<"Invalid input";
		
	}
	int l=0;
	int r=n-1;
	int mini_l=0;
	int mini_r=1;
	int m_sum=a[0]+a[1];
for(int l=0;l<n-1;l++)
{
for(int r=l+1;r<n;r++)
{
sum=a[l]+a[r];
if(abs(sum)<abs(m_sum))
{
m_sum=sum;
mini_l=l;
mini_r=r;
}
}
}
cout<<"Two elements whose sum is minimum are "<<a[mini_l]<<" and "<<a[mini_r];
}
int main()
{
int a[]={1,60,-10,70,-80,85};
int n=sizeof(a)/sizeof(a[0]);
SumoftwoNum(a,n);
return 0;
}