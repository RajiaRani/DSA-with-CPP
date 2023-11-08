#include<iostream>
using namespace std;
bool isSorted(int a[],int n)
{
	if(n==0 || n==1)
	return true;
	if(a[0]>a[1])
	return false;
	else
	{
		bool remaingpart=isSorted(a+1,n-1);
		return remaingpart;
	}
}
int main()
{
	int a[7]={2,4,5,6,8,9,12};
	int n=7;
	 isSorted(a, n);
	int ans= isSorted(a,n);
	if(ans)
	{
	  cout<<"Array is sorted"<<endl;
		}
	else
	{
		cout<<"Array is not sorted"<<endl;
	}
	return 0;
}