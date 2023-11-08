//find pair with pair product
#include<iostream>
using namespace std;
void FindPair(int a[], int n)
{
	if(n<2)
	{
		cout<<" no pairs exists";
		return;
	}
	if(n==2)
	{
		cout<<a[0]<<" "<<a[1]<<" ";
		return ;
	}
	int posa=INT_MIN, posb=INT_MIN;
	int nega=INT_MIN, negb=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>posa)
		{
			posb=posa;
			posa=a[i];
		}
		else if(a[i]>posb)
		posb=a[i];
	if(a[i]<0 && abs(a[i])>abs(nega))
	{
		negb=nega;
		nega=a[i];
	}
	else if(a[i]<0 && abs(a[i])>abs(negb))
	negb=a[i];
	}
if(nega*negb >posa*posb)
cout<<"Max product pair is {"<<nega<<","<<negb<<"}";
else
cout<<"Max product pair is {"<<posa<<","<<posb<<"}";
}
int main()
{
	int a[]={2,5,8,3,11,23,67,89,333};
	int n=sizeof(a)/sizeof(a[0]);
	FindPair(a,n);
	return 0;
}