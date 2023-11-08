#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printNSEL(int a[],int n)
{
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		while(!s.empty() && s.top()>=a[i])
		s.pop();
		if(s.empty())
		cout<<"_ ,";
		else
		cout<<s.top()<<" , ";
		s.push(a[i]);
	}
	}
int main()
{
	int a[]={1,3,0,2,5};
	int n=sizeof(a)/sizeof(a[0]);
	printNSEL(a,n);
	return 0;
}