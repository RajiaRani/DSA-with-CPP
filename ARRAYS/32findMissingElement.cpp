#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missingelement(int a[],int b[],int n,int m)
 {
 	if(m!=n-1 && n!=m-1)
 	{
	cout<<"invalid array";
 	return;
 }
int res=0;
for(int i=0;i<n;i++)
{
res=  res^ a[0];
}
for(int j=0;j<m;j++)
{
res= res^b[j];
}
cout<<"Missing element is -> "<<res;
 }
int main()
{
int a[]={1,4,5,7,9};
int b[]={4,5,7,9};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
missingelement(a,b,n,m);
return 0;
}