#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void recursion(stack<int>& s,int x)
{
//base case
if(s.empty())
{
	s.push(x);
}
else
{
	int top=s.top();
	       s.pop();
	recursion(s,x);
	s.push(top);
}
}
stack<int> insert_at_bottom(stack<int>& s,int x)
{
 recursion(s,x);
 while(!s.empty())
 {
 	cout<<s.top()<<" ";
 	s.pop();
 }
}
int main()
{
	stack<int>s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	
	int x=6;
	insert_at_bottom(s,x);
return 0;
}