#include<iostream>
using namespace std;
void print(int a[],int n)
{
	cout<<"size of the array is "<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
bool LinearSearch(int a[],int key, int n)
{
	print(a,n);
	if(n==0)
	return false;
	
	if(a[0]==key)
	return true;
	
	else
	{
		int ans=LinearSearch(a+1,key,n-1);
		return ans;
	}
}
int main()
{
	int a[]={2,4,6,33,7,16,9};
	int n=sizeof(a)/sizeof(a[0]);
	int key=9;

	int LS=LinearSearch(a,key,n);
	if(LS)
	{
		cout<<"Key is Present"<<endl;
		}
		else
		{
		cout<<"Key is not Present"<<endl;
	}
	
return 0;	
}