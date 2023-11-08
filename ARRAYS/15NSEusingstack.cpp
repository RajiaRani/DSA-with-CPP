#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printNSE(int a[], int n)
{
	stack<int>s;
	s.push(a[0]);
	for(int i=1; i<n;i++)
	{
		if(s.empty())
		{
			s.push(a[i]);
			
		}
		while(s.empty()==false && a[i]<s.top())
		{
			cout<<s.top()<<" --> "<<a[i]<<endl;
			s.pop();
		}
		s.push(a[i]);
		
	}
	while(s.empty()==false)
	{
		cout<<s.top()<<"--> "<<-1<<endl;
		s.pop();
	}
}
int main()
{
	int a[]={11,13,21,3};
	int n=sizeof(a)/sizeof(a[0]);
	printNSE(a,n);
	return 0;
}