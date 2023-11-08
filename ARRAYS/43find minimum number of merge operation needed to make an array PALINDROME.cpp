//find minimum number of merge operation needed to make an array PALINDROME
#include<iostream>
using namespace std;
int FindMiniOps(int a[], int n)
{
	int ans=0;
for(int i=0,j=n-1;i<=j;)
  {
  	if(a[i]==a[j])
  	{
  		i++;
  		j--;
	  }
	else if(a[i]>a[j])
	{
		j--;
		a[j]=a[j]+a[j+1];
		ans++;
	}
	else
	{
		i++;
		a[i]=a[i]+a[i-1];
		ans++;
	}
  }
  return ans;
}
int main()
{
int a[]={11,14,15,99};
int n=sizeof(a)/sizeof(a[0]);
cout<<FindMiniOps(a,n);
return 0;
}