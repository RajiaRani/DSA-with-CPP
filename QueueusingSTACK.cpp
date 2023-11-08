#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Queue{
   // private 
    stack<int>s1,s2;

void enqueue(int x)
{
while(!s1.empty())
{
	s2.push(s1.top());
	s1.pop();
}
//insert new value in stack 1
s1.push(x);
while(!s2.empty())
{
	s1.push(s2.top());
	 s2.pop();
}
}
int dequeue()
{
//check empty
if(s1.empty())
{
	cout<<"Queue is empty ";
	return 0;
}
else
{
	int ans=s1.top();
	s1.pop();
	return ans;
}
}

};
int main()
{
 Queue q;
 q.enqueue(1);
 q.enqueue(2);
 q.enqueue(9);
 q.enqueue(4);
 q.enqueue(22);
 cout<<q.dequeue()<<" ";
 cout<<q.dequeue()<<" ";
 cout<<q.dequeue()<<" ";
 cout<<q.dequeue()<<" ";
 cout<<q.dequeue()<<" ";
 
return 0;
}