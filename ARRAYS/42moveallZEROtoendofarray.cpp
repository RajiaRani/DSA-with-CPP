#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int a[]={1,9,8,7,0,0,0,2,3,0,4,0,33};
int n=sizeof(a)/sizeof(a[0]);
int j=0;
for(int i=0;i<n;i++)
{

	
	if(a[i]!=0)
   {
    swap (a[j],a[i]);
   j++;
}
}
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}