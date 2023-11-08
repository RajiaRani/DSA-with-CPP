#include<iostream>
#include<bits/stdc++.h>
using namespace std;
printNGEL(int a[], int n)
{
	stack<int>s;
	s.push(a[n-1]);
	for(int i=4;i>=0;i--)
	{
		if(s.empty())
		{
			s.push(a[i]);
			continue;
		}
	while(!s.empty() && s.top()<a[i])
	{
		cout<<s.top()<<"-->"<<a[i]<<endl;
		s.pop();
	}
	s.push(a[i]);

	while(!s.empty())
	{
	cout<<s.top()<<"-->"<<-1<<endl;
	s.pop();	
	}
	
	}
}
int main()
{
	int a[]={10,5,11,6,20,12};
	int n=sizeof(a)/sizeof(a[0]);
	printNSEL(a,n);
	return 0;
}