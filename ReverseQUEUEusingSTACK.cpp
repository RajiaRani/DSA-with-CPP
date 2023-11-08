#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(queue<int>&q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
void reverseQueue(queue<int>&q)
{
stack<int>s;
 while(!q.empty())
 {
 	s.push(q.front());
 	q.pop();
 }
 while(!s.empty())
 {
 	q.push(s.top());
 	s.pop();
 }
}
int main()
{   
   queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	reverseQueue(q);
	print(q);
	return 0;
}