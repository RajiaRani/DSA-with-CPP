#include<iostream>
#include<queue>
#include<deque>
using namespace std;
void ReverseKelements(queue<int>& q ,int k)
{
//create doubly queue
 deque<int>d;
//insert the elements into the deque
for(int i=0;i<k;i++)
{
	d.push_front(q.front());
	  q.pop();
}
//pop the elements from the deque and add into the queue
while(!d.empty())
{
	q.push(d.front());
	  d.pop_front();
}
//add the remaining elements int the queue
for(int i=0;i<q.size()-k;i++)
{
	q.push(q.front());
	  q.pop();
}
}
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	q.push(80);
	q.push(90);
	q.push(100);
	int k=5;
	ReverseKelements(q,k);
	while(!q.empty())
	{
	cout<<q.front()<<" ";
	 q.pop();
}
	 return 0;
	
}