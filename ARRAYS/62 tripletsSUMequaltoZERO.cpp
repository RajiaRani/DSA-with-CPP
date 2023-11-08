#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findTsumZERO(int a[], int n)
{
	bool found=false;
	int i, j, k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==0)
				{
					cout<<"triplets are"<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
					found=true;
				}
			}
		}
	}
	if(found==false)
	cout<<"NO Triplets";
}
int main()
{
	int a[]={-1,4,2,-2,5,0,1};
	int n=sizeof(a)/ sizeof(a[0]);
	findTsumZERO(a,n);
	return 0;
}
//time=o(n)3