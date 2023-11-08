//Minimum removals required to make a given array bitonic
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void MiniElementRemoval(int a[], int n)
{
int i, j;
vector<int>l(n,1);
vector<int>r(n,1);

for(i=1;i<n;i++)
   for(j=0;j<n;j++)
   if(a[i]>a[j])
   {
   	l[i]=max(l[i], l[j]+1);
	 }  
for(i=n-2;i>=0;i--)
  for(j=n-1;j>i;j--)
   if(a[i]>a[j])
   {
   	r[i]=max(r[i], r[j]+1);
   }

int maxLen=0;
for(i=1;i<n;i++)
{
	maxLen=max(maxLen,l[i]+r[i]-1);
	
}
cout<<(n-maxLen)<<"   ";

}
void makeBitonic(int a[], int n)
{
if(n==1)
cout<<"0"<<endl;
if(n==2)
{
	if(a[0]!=a[1])
	cout<<"0"<<endl;
else
   cout<<"1"<<endl;
   return;
}
MiniElementRemoval(a,n);
}
int main()
{
int a[]={2,1,1,5,6,2,3,1};
int n=sizeof(a)/sizeof(a[0]);
makeBitonic(a,n);
return 0;
}