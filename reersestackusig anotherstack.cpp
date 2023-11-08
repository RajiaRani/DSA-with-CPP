#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int>& s1, stack<int>& s2 , int n )
{
for(int i=0;i<n;i++)
{
	s2.push(s1.top());
	         s1.pop();
}
}
void reverse_stack_by_using_extra_stack(stack<int>& s ,int n)
{
	stack<int>s2;
	for(int i=0;i<n;i++)
	{
		int temp=s.top();
		        s.pop();
		        
		transfer(s, s2, n-i-1);
		s.push(temp);
		transfer(s2, s, n-i-1);
	}
}
int main()
{
	int n=6;
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	reverse_stack_by_using_extra_stack(s,n);
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
return 0;
}