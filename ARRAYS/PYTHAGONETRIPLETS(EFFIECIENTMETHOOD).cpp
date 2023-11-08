#include<iostream>
#include<algorithm>
using namespace std;
bool istriplets(int a[],int n)
{
	for(int i=0;i<n;i++)
	a[i]=a[i]*a[i];
	sort(a,a+n);
   for(int i=n-1;i>=2;i--)
   {
   	int l=0, r=i-1;
   	while(l>r)
   	{
	if(a[l]+a[r]==a[i])
   	return true;
   	(a[l]+a[r]<a[i]);
   	l++;
   	r--;
   	}
   }
   return false;
}
int main()
{
	int a[]={1,2,3,4,6};
	int n=sizeof(a)/sizeof(a[0]);
	istriplets(a,n)?cout<<"YES":cout<<"NO";
	return 0;
}