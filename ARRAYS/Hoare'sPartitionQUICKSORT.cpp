#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low-1;
	int j=high+1;
	while(true)
	{
	
	do{
	i++;
	}while(pivot>a[i]);
	do{
		j--;
	}while(pivot<a[j]);
	if(i>=j)
	return j;
	
	swap(a[i],a[j]);
}
}
void quicksort(int a[], int low,int high)
{
	if(low<high)
	{
		int p=partition(a,low,high);
		     quicksort(a,low,p);
		     quicksort(a,p+1,high);
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i] << "  " ;
		cout<<endl;
	}
}
int main()
{
	int a[]={2,56,45,33,29,6,12,34,55,66,0};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	cout<<" sorted array";
	print(a,n);
	return 0;
}