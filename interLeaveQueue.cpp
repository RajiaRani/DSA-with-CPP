#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void interLeaveQueue(queue<int> &q)
{
 int n=q.size();
 if(n%2!=0)
 cout<<"queue is enen "<<endl;
 
 queue<int>newqueue;
 //traverse karna hai half tak hi
 for(int i=0;i<n/2;i++)
 {
 	newqueue.push(q.front());
 	               q.pop();
 }
 //newqueue ko empty karo
 while(!newqueue.empty())
 {
 	q.push(newqueue.front());
 	q.push(q.front());
 	      newqueue.pop();
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
	interLeaveQueue(q);
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}