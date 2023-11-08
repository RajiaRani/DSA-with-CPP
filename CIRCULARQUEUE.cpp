#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
	private:
		int * arr;
		int front;
		int rear;
		int size;
public:
	CircularQueue(int n)
	{
		size=n;
		arr=new int[n];
		front=-1;
		rear=-1;
	}
	void enqueue( int value);
	int dequeue();
	void print();
};

void CircularQueue::  enqueue(int value)
{
//check full condition
if((rear==size-1 && front==0)|| (rear==(front-1) %(size-1)))
{
cout<<"circular queue is full "<<endl;
return ;
}

//empty
if(front==-1)
{
	rear=0;
	front=0;
	arr[rear]=value;
}
else if(rear==size-1 && front!=0)
{
 rear=0;
 arr[rear]=value;	
}
else
{
	rear++;
	arr[rear]=value;
}
}

int CircularQueue:: dequeue()
{
//if empty
if(front==-1)
{
	cout<<"circular queue is empty ";
	return -1;
}
//only single element present
int ans=arr[front];
arr[front]= -1;
 if(front==rear)
{
	front=-1;
	rear=-1;
}
//agar front end mein ho
else if(front==size-1)

	front=0;

else

	front++;

return ans;
}
//print the elements on screen
void CircularQueue:: print()
{
if(front==-1)
{
	cout<<"circular queue is empty"<<endl;
	return;
}
cout<<"PRINT THE CIRCULAR QUEUE ELEMENTS"<<endl;
 if(rear>=front)
{
	for(int i=front;i<=rear;i++)
	
		cout<<arr[i]<<" ";
	}
else
{
	for(int i=front;i<size;i++)
	cout<<arr[i]<<" ";
	for(int i=0;i<=rear;i++)
	cout<<arr[i]<<" ";
	}
}


int main()
{
	CircularQueue q(6);
	q.enqueue(1);
	q.enqueue(6);
	q.enqueue(9);
//	q.enqueue(3);
//	q.enqueue(2);
	q.print();
	cout<<endl;
	cout<<"deleting the elemenets "<<endl<<q.dequeue()<<endl;
	cout<<"deleting the elemenets"<<endl<<q.dequeue()<<endl;
	cout<<"deleting the elemenets"<<endl<<q.dequeue()<<endl;
	q.enqueue(-1);
	q.enqueue(12);
//	q.enqueue(7);
	q.print();
	return 0;
	
}









