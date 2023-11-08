#include<iostream>
using namespace std;
int minimum(int x,int y)
{
	return(x<y)? x:y;
}
int maximum(int x,int y)
{
	return (x>y)? x:y;
}
int FindLength(int a[], int n)
{
	int MaxLength=1;
	for(int i=0;i<n-1;i++)
{
	int minimum=a[i];
    int maximum=a[i];
	for(int j=i+1;j<n;j++)
	{
	minimum=min(minimum,a[j]);
	maximum=max(maximum,a[j]);
	
if((maximum-minimum)==j-i)
MaxLength=max(MaxLength,maximum-minimum+1);
}
}
return MaxLength;
}
int main()
{
int a[]={10,12,11};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Length of the longest contiguous subarray is -> "<<FindLength(a,n);
return 0;
}