#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void deleteMid(stack<char>&s)
{
int n=s.size();
stack<char>ts;//tempstack=ts
int count=0;
 while(count<(n/2))
 {
 	char temp=s.top();
 	s.pop();
 	ts.push(temp);
 	count++;
 }
 s.pop();
while(!ts.empty())
{
	s.push(ts.top());
	ts.pop();
}
}
int main()
{
	stack<char>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(16);
	s.push(6);
	s.push(7);
	s.push(19);
	s.push(11);
	s.push(10);
	deleteMid(s);
	while(!s.empty())
	{
		char p=s.top();
		s.pop();
		cout<<p<<" ";
	}
return 0;
}