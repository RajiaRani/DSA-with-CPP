//program to check if an array is Bitonic or NOT
#include<iostream>
using namespace std;
int CheckArrayBitonic(int a[], int n)
{
int i,j;
for(i=1;i<n;i++)
 {
 	if(a[i]>a[i-1])
   continue;
 if(a[i]<=a[i-1])
 break;	
 }
if(i==n-1)
return 1;
 
for(j=i+1;j<n;j++)
{
if(a[j]>=a[j-1])
break;
if(a[j]<a[j-1])
continue;	
}
i=j;
if(i!=n)
return 0;
return 1;
 }
int main()
{
int a[]={5,6,7,8,9,10,1,2,11};
int n=sizeof(a)/sizeof(a[0]);
(CheckArrayBitonic(a,n)==1)?
cout<<"YES":cout<<"NO"<<endl;
return 0;
}