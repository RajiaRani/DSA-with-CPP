#include<iostream>
using namespace std;
int LBS(int a[],int n)
{
	int i,j;
int*lis=new int[n];
for(i=0;i<n;i++)
lis[i]=1;

for(i=1;i<n;i++)
   for(j=0;j<i;j++)
   if(a[i]>a[j] && lis[i]<lis[j]+1)
   lis[i]=lis[j]+1;

int*lds=new int[n];
for(i=0;i<n;i++)
lds[i]=1;

for(i=n-2;i>=0;i--)
   for(j=n-1;j<i;j--)
   if(a[i]>a[j] && lis[i]<lis[j]+1)
   lds[i]=lds[j]+1;
   
int max=lis[0]+lds[0]-1;
for(i=1;i<n;i++)
   if(lis[i]+lds[i]-1>max)
   max=lis[i]+lds[i]-1;
   return max;

}
int main()
{
int a[]={1,3,5,6,7,2,10,13,16,18,11,12};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Longest Bitonic Sequences -> "<<LBS(a,n);
return 0;
}