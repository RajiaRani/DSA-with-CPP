#include<iostream>
using namespace std;
void stockBuySell(int a[], int n)
{
	if(n==1)
	return ;
	
int i=0;
while(i<n-1)
{
	while( (i<n-1) && a[i]>=a[i+1])
	i++;
	
	if(i==n-1)
	break;
	
	int buy =i++ ;
	while((i<n) && a[i]>=a[i-1])
	i++;
	int sell=i-1;
	cout<<" Buy on day-> "<<buy<<" Sell on day-> "<<sell<<endl;
}
	
}
int main()
{
	int a[]={100,180,260,310,40,535,695};
	int n=sizeof(a)/sizeof(a[0]);
	stockBuySell(a,n);
	return 0;
}