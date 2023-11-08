//find maximum diff btw two elements such that larger elt appears after the smaller number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxDifference(int a[], int n)
{
int max_diff=a[1]-a[0];//M_diff means maximum difference
int mini_elt=a[0];    //minimum element
for(int i=1;i<n;i++)
  {
  	if(a[i]-mini_elt>max_diff)
    max_diff=a[i]-mini_elt;


  if (a[i]<mini_elt)
  
   mini_elt=a[i];
  }
  return max_diff;
}
int main()
{
int a[]={1,2,90,10,110};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Maximum difference is -> "<<MaxDifference(a,n);
return 0;
}