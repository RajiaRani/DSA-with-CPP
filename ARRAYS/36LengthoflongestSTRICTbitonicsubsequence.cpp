#include<iostream>
#include<bits/stdc++.h>
//#include <stdio.h>
//#include <stdlib.h>
using namespace std;
int FindStrictBS(int a[],int n)//find strict bitonic subsquence
{
int i,j;
int *lis=new int[n];
for(i=0;i<n;i++)
    lis[i]=1;
   

for(i=1;i<n;i++)
   for(j=0;j<i;j++)
   if(a[i]>a[j] && abs(a[i]-a[j]==1) && lis[i]<lis[j]+1 )
   lis[i]=lis[j]+1;
 
 int *lds=new int[n];
 for(i=0;i<n;i++)
 	 lds[i]=1;
 	 
for(i=n-2;i>=0;i--)
   for(j=n-1;j>i;j--)
   if(a[i]>a[j] && abs(a[i]-a[j] ==1) && lds[i]<lds[j]+1 ) 
   lds[i]=lds[j]+1;
   
int max=lis[0]+lds[0]-1;
for(i=1;i<n;i++)
  if(max<lis[i]+lds[i]-1)
  max=lis[i]+lds[i]-1;
  return max;   
}
int main()
{
int a[]={1,5,2,3,4,5,3,2};
int n=sizeof(a)/sizeof(a[0]);
cout<<FindStrictBS(a,n);
return 0;
}