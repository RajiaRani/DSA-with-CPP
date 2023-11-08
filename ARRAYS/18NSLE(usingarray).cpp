#include<iostream>
using namespace std;
void 	printNSLE(int a[],int n)
{
	cout<<" - ";
	for(int i=1;i<n;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]<a[i])
			{
				cout<<a[j]<<",";
				break;
			}
		}
		int j;
		if(j==-1)
		cout<<"-,";
	}
}
int main()
{
	int a[]={1,3,0,2,5};
	int n=sizeof(a)/sizeof(a[0]);
	printNSLE(a,n);
	return 0;
}