#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void FirstKnegativeInteger(int arr[],int n,int k)
{
//create doubly queue
	deque<int>dq;
	int i;
//traverse for the 1st window
for(i=0;i<k;i++)
{
// arr[i] is negative the push_back in the deque
  if(arr[i]<0)
  {
  	dq.push_back(i);
	  }	
}
for(;i<n;i++)
{
	if(!dq.empty())
	{
		cout<<arr[dq.front()]<<" ";
	}
	else
	cout<<"0"<<" ";

while(!dq.empty() && dq.front()<i-k+1)
{
	dq.pop_front();
}


 if(arr[i]<0)
 {
 	dq.push_back(i);
 }
}
if(!dq.empty())
{
	cout<<arr[dq.front()]<<" ";
}
else
cout<<"0"<<" ";
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={2,-1,9,-4,-1,9,-6,7,0,-12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	print(arr,n);
	cout<<" first kth negative integer "<<endl;
	FirstKnegativeInteger(arr,n,k);

	return 0;
}