#include<iostream>
using namespace std;
int findmissingelt(int a[],int b[], int n)
{
if(n==1)
return a[0];
if(a[0]!=b[0])
return a[0];
int l=0;
int r=n-1;
while(l<r)
{
int m=(l+r)/2;
if(a[m]==b[m])
l=m;
else
r=m;
if(l=r-1)
break;
}
return a[r];
}
void findmissing(int a[],int b[],int n,int m)
{
if(n==m-1)
cout<<"Missing element is -> "<<findmissingelt(a,b,m)<<endl;
else if(m==n-1)
cout<<"Missing element is->"<<findmissingelt(a,b,n)<<endl;
else
cout<<"Invalid input";
}

int main()
{
int a[]={1,4,5,7,9};
int b[]={4,5,7,9};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
findmissing(a,b,n,m);
return 0;
}