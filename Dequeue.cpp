#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
class deque{
	private:
		
		int *arr;
		int size;//f=front, r=rear
		int front;
		int rear;
		
	public:
	deque(int n)
	{
		size=n;
		arr=new int [size];
		front=-1;
		rear=-1;
	}
	
 void push_front(int x);
 void push_back(int x);
 int pop_front();
 int pop_back();
 bool isFull();
 bool isEmpty();
 int getFront();
 int getRear();
 
};

//check queue is full
bool deque :: isFull()
{
  if((front==0 && rear==size-1) ||(rear==(front-1)%(size-1)))
  {
  	return true;
  }
  return false;
}
//check queue is empty
bool deque :: isEmpty()
{
	if(front==-1)
	{
		return true;
	}
	return false;
}
void deque :: push_front(int x)
{
if(isFull())
{
	cout<<"queue is full";
	return;
	}	
 if(isEmpty())
 {
 	front=rear=0;
 	arr[front]=x;
 }
 else if(front==0)
 {
 	front=size-1;
 	arr[front]=x;
 }
 else
 front--;
 arr[front]=x;
}
//push at rear
void deque :: push_back(int x)
{
	if(isFull())
{
	cout<<"queue is full";
	return;
	}	
 if(isEmpty())
 {
 	front=rear=0;
 	arr[rear]=x;
 }
 else if(rear==size-1)
 {
 	rear=0;
 	arr[rear]=x;
 }
 else
 {
 	rear++;
 	arr[rear]=x;
 }
}
//delete fron front
int dequeue :: pop_front()
{
 if(isEmpty())
 {
 	cout<<"queue is empty";
 	return ;
 }
int ans=arr[front];
arr[front]=-1;

 if(front==rear)
 {
 	front=rear=-1;
 }
 else if(front==size-1)
 {
 	front=0;
 }
 else
 {
 	front++;
 }
 return ans;
}
//delete at rear
int dequeue :: pop_back()
{
	 if(isEmpty())
 {
 	cout<<"queue is empty";
 	return ;
 }
 int ans=arr[rear];
 arr[rear]=-1;
 if(front==rear)
 {
 	front=rear=-1;
 }
 else if(rear==0)
 {
 	rear=size-1;
 }
 else
 {
 	rear--;
 }
 return ans;
}

int deque :: getFront()
{
	if(isEmpty())
	{
	return -1;
	}
	return arr[front];
}
	
int deque :: getRear()
{
	if(isEmpty())
	{
	return -1;
	}
	return arr[rear];
}


int main()
{
 deque dq(10);
 cout<<"Insert element at front position "<<endl;
 dq.push_front(1);
 dq.push_front(10);
 dq.push_front(11);
 dq.push_front(1);
 dq.push_front(23);
 cout<<"Front element"<<dq.getFront();
 cout<<endl;
 dq.pop_front();
 dq.pop_front();
 dq.pop_front();
 cout<<"after the deletion of the elements the queue is "<<dq.getFront();
 cout<<endl;
 
 cout<<"Insert element at Rear position "<<endl;
 dq.push_back(20);
 dq.push_back(19);
 dq.push_back(13);
 dq.push_back(26);
 dq.push_back(29);
 cout<<"Rear elemet "<<dq.getRear();
 cout<<endl;
 dq.pop_back();
 dq.pop_back();
 dq.pop_back();
 cout<<"after the deletion of the elements the queue is "<<dq.getRear();
 cout<<endl;
 
return 0;
}