#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findcommonelement(int a[], int b[], int c[],int x,int y, int z)
{
	unordered_set<int>uset1,uset2,uset3;
	for(int i=0;i<x;i++)
	{
		uset1.insert(a[i]);
	}
	for(int i=0;i<y;i++)
	{
		uset2.insert(b[i]);
	}
	for(int i=0;i<z;i++)
	{
		if(uset1.find(c[i])!=uset1.end() && uset2.find(c[i])!=uset2.end())
		{
			if(uset3.find(c[i])==uset3.end())
			cout<<c[i]<<"  ";
			uset3.insert(c[i]);
		}
	}
}
int main()
{
int a[]={2,5,8,9,12,14,15,20};
int b[]={4,5,6,7,8,10,15};
int c[]={5,7,8,12,13,15};
int x=sizeof(a)/sizeof(a[0]);
int y=sizeof(b)/sizeof(b[0]);
int z=sizeof(c)/sizeof(c[0]);
cout<<"Common element are ";
findcommonelement(a,b,c,x,y,z);
return 0;
}