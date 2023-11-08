#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ReverseAarry(int a[],int start, int end)
{
while(start<end)
{
	int temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	start++;
	end--;
}
}
void print(int a[], int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  "<<endl;
}
int main()
{
int a[]={1,2,3};
int n=sizeof(a)/sizeof(a[0]);
 
 ReverseAarry(a,0,n-1);
  print(a,n);
return 0;
}