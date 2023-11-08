#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
	Node(int d)
	{
		data=d;
		next=NULL;
	}
};
class CircularQueue{
	Node*front,*rear;
	public:
	CircularQueue()
	{
		front=NULL;
		rear=NULL;
	}
void enqueue(int x)
{
//if empty
Node*temp=new Node(x);
if(front==NULL)
{
	front=temp;
	rear=temp;
	temp->next=front;
}
 rear->next=temp;
   rear=temp;
   rear->next=front;
}

void dequeue()
{
	if(front==NULL)
	{
		cout<<"CircularQueue is empty ";
	}
//only 1 element is present
if(front==rear)
{
	Node* nodetodelete=front;
	front=rear=NULL;
	delete(nodetodelete);
}
Node* nodetodelete=front;
  front=front->next;
  rear->next=front;
  delete(nodetodelete);
}
void display()
{
	if(front==NULL)
	{
		cout<<"CircularQueue is empty "<<endl;
	}
else
{ 
Node*temp=front;
cout<<"CircularQueue is = ";
do
{
	cout<<temp->data<<" ";
	temp=temp->next;
}
while(temp!=front);
cout<<endl;
}
}
};
int main()
{
	CircularQueue q;
	q.enqueue(2);
	q.enqueue(6);
	q.enqueue(3);
	q.enqueue(8);
	q.enqueue(7);
	q.display();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.display();
	q.enqueue(12);
	q.enqueue(20);
	q.enqueue(29);
	q.display();
	q.dequeue();
	q.display();
	
return 0;
}