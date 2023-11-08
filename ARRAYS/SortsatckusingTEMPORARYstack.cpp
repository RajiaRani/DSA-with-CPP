#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int>sortStack(stack<int>s)
{
stack<int>tempstack;
while(!s.empty())
{
	int temp=s.top();
	s.pop();

while(!tempstack.empty() && tempstack.top()>temp)
{
	s.push(tempstack.top());
	tempstack.pop();
}
tempstack.push(temp);
}
return tempstack;
}
int main()
{
stack<int>s;
s.push(1);
s.push(9);
s.push(4);
s.push(11);
s.push(5);
s.push(4);
s.push(13);
s.push(7);
s.push(2);
stack<int>tempstack=sortStack(s);
while(!tempstack.empty())
{
	cout<<tempstack.top()<<" ";
	tempstack.pop();
}
return 0;
}