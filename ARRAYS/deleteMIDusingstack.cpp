#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void deleteMid(stack<int>& s)
 {
 stack<int>tempstack;
 int count=0;
 int n=s.size();
  while(count<n/2)
  {
  	tempstack.push(s.top());
  	s.pop();
  	count++;
  }
  s.pop();
while(!tempstack.empty())
{
	s.push(tempstack.top());
	tempstack.pop();
}
 }
int main()
{
	stack<int>s;
	s.push(1);
	s.push(5);
	s.push(9);
	s.push(8);
	s.push(53);
	s.push(22);
	s.push(3);
	s.push(7);
	s.push(11);
	
	
	deleteMid(s);
	while(!s.empty())
	{
		char p=s.top();
		s.pop();
		cout<<p<<" ";
		
	}
	return 0;
}