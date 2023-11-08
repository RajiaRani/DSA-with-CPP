#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void firstKnegativeElement(int arr[], int n, int k)
{
	int firstnegativeindex=0;
	int firstnegativeElement;
	for(int i=k-1;i<n;i++)
	{
	while((firstnegativeindex<i) && (firstnegativeindex<=i-1 || arr[firstnegativeindex]>=0))
	{
		firstnegativeindex++;
	}
      
if(arr[firstnegativeindex]<0)
{
	firstnegativeElement=arr[firstnegativeindex];
}
else
{
firstnegativeElement=0;
}
	cout<<firstnegativeElement<<" ";
}
}
int main()
{
	int arr[]={2,-1,9,0,5,-3,7,4,-2,11,16,19,-5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
    firstKnegativeElement(arr,n,k);
    return 0;
}