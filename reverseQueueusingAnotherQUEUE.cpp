#include<iostream>
#include<bits/stdc++.h>
using namespace std;
queue<int> reverseQueue(queue<int> q1)
{
	int s=q1.size();
	queue<int>q2;
	
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<q1.size()-1;j++)
		{
			int ele=q1.front();
			        q1.pop();
			        q1.push(ele);
		}
		q2.push(q1.front());
		          q1.pop();
	}
	return q2;
}

int main()
{
	 queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	q1.push(6);
	q1.push(7);
	q1.push(8);
	q1.push(9);
	q1.push(10);
	q1.push(12);
	q1.push(13);
	q1=reverseQueue(q1);
	while(!q1.empty())
	{
	
	cout<<q1.front()<<" ";
	     q1.pop();
	 }
	
	return 0;
}