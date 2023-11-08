//Find Maximum sum such that NO two elements are adjacent
//time=O(N)
//space=o(1)
#include<iostream>
using namespace std;
int FindMaximum(int a[],int n)
{
	int include=a[0];
	int exclude=0;
	int new_exclude;
	for(int i=1;i<n;i++)
	{
		new_exclude=max(include,exclude);
		include=exclude+a[i];
		exclude=new_exclude;
	}
	return max(include,exclude);
}
int main()
{
	int a[]={1,2,3,100,4,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<FindMaximum(a,n);
	return 0;
}