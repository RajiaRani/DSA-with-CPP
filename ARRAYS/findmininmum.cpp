#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class mystack{
public:
stack<int>s;
int minEle;
int getmin()
{
	if(s.empty())
	{
		return -1;
	}
	else
	return minEle;
}
int top()
{
	if(s.empty())
	return -1;
	else
	{
		if(s.top()>=minEle)
		return s.top();
	else (s.top()<minEle);
	return minEle;
	}
}
//pushing operation
void push(int x)
{
if(s.empty())
cout<<"stack is empty";
else
{
	if(x<minEle)
	{
		s.push(2*x-minEle);
		minEle=x;
	}
else if(x>=minEle)
{
	s.push(x);
}
}
}
//pop operation
void pop()
{
if(s.empty())
 {
cout<<"stack is empty";
 }
else
{
	if(s.top()>=minEle)
	s.pop();
else if(s.top()<minEle)
{
	minEle=2*minEle-s.top();
	s.pop(); 
}
}
}
};
int main()
{
	mystack s;
	s.push(2);
	s.push(5);
	s.getmin();
	s.push(3);
	s.push(4);
	s.getmin();
	s.pop();
	s.getmin();
	s.pop();
	s.top();
	
return 0;
}