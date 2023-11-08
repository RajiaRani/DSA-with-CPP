#include<iostream>
using namespace std;
int nextgreater(int a[],int n)
{
	int MFR=-1;//MFR means maximum_from_right:
	for(int i=n-1;i>=0;i--)
	{
		int temp=MFR;
		if(a[i]>MFR)
		{
			MFR=a[i];
		}
		a[i]=temp;
	}

	
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  "<<endl;
}
int main()
{
	int a[]={16,17,4,3,5,2};
	int n=sizeof(a)/sizeof(a[0]);
	nextgreater(a, n);
	printarray( a, n);
	return 0;
}