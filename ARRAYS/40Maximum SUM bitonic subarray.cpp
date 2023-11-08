//Maximum SUM bitonic subarray
#include<iostream>
using namespace std;
int MaxSumBitonicSubarray(int a[], int n)
{
int maxSum= INT_MIN;
int msis[n],msds[n];// msis=maxsumincreasingsubarray   msds=maxsumdecreasingsubarray

 msis[0]=a[0];
 for(int i=1;i<n;i++)
 if(a[i]>a[i-1])
 msis[i]=(msis[i-1]+a[i]);
 else
 msis[i]=a[i];
 
msds[n-1]=a[n-1];
for(int i=n-2;i>=0;i--)
   if(a[i]>a[i+1])
   msds[i]=msds[i+1]+a[i];
else
   msds[i]=a[i];
   
for(int i=0;i<n;i++)
if(maxSum<(msis[i]+msds[i]-a[i]))
   maxSum=msis[i]+msds[i]-a[i];
   return maxSum;
}
int main()
{
int a[]={2,10,5,6,7,3,2,1};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Maximum sum = "<<MaxSumBitonicSubarray(a,n);
return 0;
}