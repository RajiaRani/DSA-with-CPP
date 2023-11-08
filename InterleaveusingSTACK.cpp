#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Interleave (queue<int> &q)
{
	int n=q.size();
	if(n%2!=0)
	cout<<"queue is even";
//stack
stack<int>s;
for(int i=0;i<n/2;i++)
{
	//add the 1st half into the stack
	s.push(q.front());
	q.pop();
}
while(!s.empty())
{
//remove from the stack and add into the queue
    q.push(s.top());
     s.pop();
}
for(int i=0;i<n/2;i++)
{
// add the above half to the starting in queue
 q.push(q.front());
      q.pop();
}
for(int i=0;i<n/2;i++)
{
	s.push(q.front());
	 q.pop();
}
while(!s.empty())
{
// stack se 1 niklaugi and add karugi phir queue ka peche add karugi
  q.push(s.top());
       s.pop();
       q.push(q.front()); 
       q.pop();
}
}
int main()
{
    queue<int>q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
	q.push(20);
	int n=q.size();
	Interleave(q);
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}