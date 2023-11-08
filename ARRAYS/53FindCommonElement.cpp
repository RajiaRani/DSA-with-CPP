#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void FindCommonElement(int A[],int B[], int C[] , int n1, int n2, int n3)
{
int i=0;
int j=0;
int k=0;
    while(i<n1 && j<n2 && k<n3)

		{
			if(A[i]==B[j] && B[j]==C[k])
			{
				cout<<A[i]<<" ";
				i++;
				j++;
				k++;
			}
	else if(A[i]<B[j])
	       i++;
	else if(B[j]<C[k])
	      j++;
	      else 
	      k++;
		
}
}
int main()
{
int A[]={1,4,10,20,40,80};
int B[]={6,7,20,80,100};
int C[]={3,4,15,20,30,70,80,120};
int n1=sizeof(A)/sizeof(A[0]);
int n2=sizeof(B)/sizeof(B[0]);
int n3=sizeof(C)/sizeof(C[0]);
cout<<" find common element is ";
FindCommonElement(A,B,C,n1,n2,n3);
return 0;
}