#include<iostream>
using namespace std;
int findDuplicate(int a[],int n)
{
for(int i=0;i<n;i++)
{
a[a[i]%n]=a[a[i]%n]+n;
}
cout<<"Repeating elements are ->"<<endl;
for(int i=0;i<n;i++)
{
if(a[i]>=n*2)
{
	cout<<i<<" "<<endl;
}
}
return 0;
}
int main()
{
int a[]={0,4,3,2,7,8,2,3,1};
int n=sizeof(a)/sizeof(a[0]);
findDuplicate(a,n);
return 0;
}