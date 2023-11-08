#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ReversefirstKelement(queue<int> &q,int k)
{
	deque<int>dq;
for(int i=0;i<k;i++)
{
	dq.push_front(q.front());
		    q.pop();
	}
while(!dq.empty())
{
	q.push(dq.front());
		dq.pop_front();
	}
for(int i=0;i<q.size()-k;i++)
{
  q.push(q.front());
 	     q.pop();
 }
}
int main()
{
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	int k=3;
	ReversefirstKelement(q,k);
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	
	return 0;
}