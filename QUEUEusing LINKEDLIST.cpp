#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class  Node{
 public:	
 int data;
 Node*next;
 
 	Node(int d)
 	{
 		data=d;
 		next=NULL;
	 }
};
class Queue{
    Node*front;
	Node*rear;
	
public:
	Queue()
	{
		front=NULL;
		rear=NULL;
	}
//push operation at head 
void enqueue(int x)
{
//check linked list is empty
Node* temp=new Node(x);
if(front==NULL)
{
	front=temp;
	rear=temp;
	return;
	}

 rear-> next = temp;
 rear = temp;	
}
//pop operation at end
void dequeue()
{
//check if empty
if(front==NULL)
{
	cout<<"Queue is empty";
	return;
}
if(front==rear)
{
	front=rear=NULL;
}
Node* todeletenode=front;
 front=front->next;
 delete(todeletenode);
}
//front value
int peek()
{
if(front==NULL)
{
cout<<"queue is empty"<<endl;
return -1 ;	
}
return front->data;
}
//check queue is empty
bool isEmpty()
{
	if(front==NULL)
	{
		return true;
	}
	return false;
}
};

int main()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(6);
	q.enqueue(9);
	q.enqueue(11);
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.isEmpty()<<endl;
	return 0;
}