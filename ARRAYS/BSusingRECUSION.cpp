#include<iostream>
using namespace std;
void print(int a[],int l,int r)
{
	for(int i=l;i<=r;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
bool BS(int a[],int l,int r, int k)
{
	print(a,l,r);
	if(l>r)
	return false;
	int mid=(l+r)/2;

	cout<<"value of the array mid is " <<a[mid]<<" "<<endl;
	if(a[mid]==k)
	return true;
	if(a[mid]<k)
	{
		return BS(a,mid+1,r,k);
	}
	else
	{
		return BS(a,l,mid-1,k);
	}
}
int main()
{
	int a[]={2,6,9,10,15,19,22,27};
	int n=sizeof(a)/sizeof(a[0]);
	int k=22;
	cout<<BS(a,0,n-1,k);
	return 0;
}