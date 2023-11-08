#include<iostream>
using namespace std;
int linearsearch(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		return i;
	}
	return -1;
}
int main()
{
	   int a[]={2,8,9,6,7,5,11};
	   int n=sizeof(a)/sizeof(a[0]);
	   cout<<linearsearch(a,n);
	   return 0;
}