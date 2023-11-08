#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int l, int r, int key)
{
if(l>r)
return -1;

int m=(l+r)/2;
if(a[m]==key)
   return m;

if(a[l]<=a[m])
{
 if(a[l]<=key && key<=a[m])
     return BinarySearch(a,l,m-1,key);
        return BinarySearch(a,m+1,r,key);
}
if(key<=a[r] && key>=a[m])

      return BinarySearch(a,m+1,r,key);
         return BinarySearch(a,l,m-1,key);

}
int main()
{
int a[]={4,5,6,7,8,9,1,2,3};
int n=sizeof(a)/sizeof(a[0]);
int key=2;
int i=BinarySearch(a,0,n-1,key);
    if(i!=-1)
     cout<<"Index -> "<<i<<endl;
else
      cout<<"Key is not found "<<i<<endl;
return 0;
}