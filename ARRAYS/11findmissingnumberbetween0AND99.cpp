#include<iostream>
#define LIMIT 99
using namespace std;
void findmissingnumber(int a[], int n)
{
 bool seen[LIMIT]={false};
 for(int i=0;i<n;i++)
 
 	if(a[i]<LIMIT)
 	seen[a[i]]=true;
 	int i;
 	while(i<LIMIT)
 	{
 		if(seen[i]==false)
 		{
 			int j=i+1;
 			while(j<LIMIT && seen[j]==false)
            j++;
			(i+1==j)?cout<<i:cout<<" "<<i<<" - "<<j-1;
			cout<<i<<"  ";
			cout<<i<<j-1<<" ";
			i=j;			
		 }
		 else
		 i++;
	 }
 
}
int main()
{
	int a[]={1,3,77,89,56,33,44,23,90,109,22};
	int n=sizeof(a)/sizeof(a[0]);
    findmissingnumber(a,n);
	return 0;
}