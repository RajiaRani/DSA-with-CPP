//Triplets whose sum is equal to zero are
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void TripletsumisZero(int a[], int n)
{
	bool found=false;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		int l=i+1;
		int r=n-1;
		int x=a[i];
		while(l<r)
		{
			if(x+a[l]+a[r]==0)
			{
				cout<<"Triplets whose sum is equal to zero are"<<"("<<x<<","<<a[l]<<","<<a[r]<<")"<<endl;
				l++;
				r--;
			found=true;
			break;
			}
			else if(x+a[l]+a[r]<0)
			l++;
			else
			r--;
		}
	}
	if(found==false)
	{
		cout<<"NO TRIPLETS FOUND"<<endl;
	}
}
int main()
{
	int a[]={2,6,-9,3,1,0,-3};
	int n=sizeof(a)/sizeof(a[0]);
	TripletsumisZero(a,n);
	return 0;
}