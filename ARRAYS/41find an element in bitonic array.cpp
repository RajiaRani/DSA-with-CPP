//find an element in bitonic array
#include<iostream>
using namespace std;
int ascendingSearch(int a[], int l, int r,int key)
{
while(l<=r)
{
int m=(l+r)/2;
if(a[m]==key)
return m;

 if(a[m]>key)
 r=m-1;
 else
 l=m+1;
}
return -1;
}
int decendingSearch(int a[],int l, int r, int key)
{
while(l<=r)
{
	int m=(l+r)/2;
 if(a[m]==key)
 return m;
if(a[m]<key)
r=m-1;
else
l=m+1;
}
return -1;
}
int findbitonicpoint(int a[],int l,int r, int n)
{
	int m=(l+r)/2;
	int bitonicpoint=0;
if(a[m]>a[m-1] && a[m]>a[m+1])
{
	return m;
}
else if(a[m]>a[m-1] && a[m]<a[m+1])
{
	bitonicpoint=findbitonicpoint(a,n,m,r);
}
else if(a[m]<a[m-1] && a[m]>a[m+1])
{
 bitonicpoint=findbitonicpoint(a,n,l,m);
}
return bitonicpoint;
}
int Searchbitonicpoint(int a[], int n, int key , int index)
{
	if(key>a[index])
	return -1;
	else if(key==a[index])
	return index;
else
{
int temp=ascendingSearch(a,0,index-1,key);
  
  if(temp!=-1)
  {
  	return temp;
	  }	
return decendingSearch(a,index+1,n-1, key);
}
}
int main()
{
	int a[]={-8,1,2,3,4,5,-2,-3};
	int n=sizeof(a)/sizeof(a[0]);
	int l,r;
	int key=5;
	l=0;
	r=n-1;
	int index;
index=findbitonicpoint(a,n,l,r);
int x=Searchbitonicpoint(a,n,key,index);
if(x==-1)
cout<<"element NOT found "<<endl;
else
cout<<"Element found at index ->"<<x<<endl;
return 0;
}