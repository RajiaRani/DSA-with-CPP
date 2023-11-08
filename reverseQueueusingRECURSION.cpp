#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverseQueue(queue<int> &q)
{
	//base case
	if(q.size()==0)
	return;
	int ele=q.front();
	        q.pop();
	        
	reverseQueue(q);
	
	q.push(ele);
	
}
void display(queue<int> &q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
		
	}
}
int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	q.push(10);
	q.push(11);
	q.push(12);
	
	reverseQueue(q);
	display(q);
	return 0;
	
}