#include<iostream>
using namespace std;
void nextGreatest(int a[],int size)
{
	int max_from_right=(size-1);
	a[size-1]= -1;
	for(int i=(size-2);i>=0;i--)
	{
		int temp=a[i];
		a[i]=max_from_right;
		if(max_from_right<temp)
		{
			temp=max_from_right;
		}
	}
	}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
}
int main()
{
	int a[]={16,17,4,3,5,2};
	int n=sizeof(a)/sizeof(a[0]);
	nextGreatest(a,n);
	cout<<" modify array is "<<endl;
	printarray(a,n);
	return 0;
}