#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FindMiniDiff(int a[], int n)
{
int diff=INT_MAX;//to initinalize the diff as a infinite
sort(a,a+n);
for(int i=0;i<n-1;i++)
{
if(a[i+1]-a[i]<diff)
diff=a[i+1]-a[i];
return diff;
}
}
int main()
{
int a[]={1,3,56,7,8,9,2,34,55};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Minimum difference between any two number is-> "<<FindMiniDiff(a,n);
return 0;
}
//time complixcity=o(NlogN)
//SPACE=O(1)