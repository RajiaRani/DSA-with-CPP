#include<iostream>
using namespace std;
int BinarySearch(int a[], int l, int r)
{
while(l<=r)
{
int m=(l+r)/2;
 if(a[m]>a[m-1] && a[m]>a[m+1])
 return m;
 else if(a[m]<a[m+1])
 return BinarySearch(a,m+1,r);
 else
   return BinarySearch(a,l,m-1);
}
return -1;
}
int main()
{
int a[]={2,4,7,9,20,12,10,23,17,15,11};
int n=sizeof(a)/sizeof(a[0]);
int index=BinarySearch(a,1,n-2);
if(index!= -1)
cout<<"Bitonic point is -> "<<a[index];
return 0;
}