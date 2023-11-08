#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void deletemid(stack<int>& s)
{
	int n=s.size();
	int count=0;
	stack<int>temp;
	while(count<n/2)
	{
		int ch=s.top();
		       s.pop();
		    temp.push(ch);
		    count++;
	}
	s.pop();
 while(!temp.empty())
 {
 	int ch=temp.top();
 	      temp.pop();
 	      s.push(ch);
 }
}
int main()
{
	
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);
s.push(8);
s.push(9);
deletemid(s);
while(!s.empty())
{
	int p=s.top();
	     s.pop();
	     cout<<p<<" ";
}
return 0;
}