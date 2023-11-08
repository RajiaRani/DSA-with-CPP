#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class KQueue{
	public:
		int k,n,freespot;
		int *arr;
		int *front;
		int *rear;
		int *next;
	KQueue(int n, int k)
	{
		this->n=n;
		this->k=k;
		freespot=0;
		arr=new int[n];
		front=new int[k];
		rear=new int[k];
		for(int i=0;i<k;i++)
		{
			front[i]=-1;
			rear[i]=-1;
		}
	next=new int[n];
	for(int i=0;i<n;i++)
	{
		next[i]=i+1;
	}
	next[n-1]=-1;
	}
void enqueue(int data, int qn)
{
	if(freespot==-1)
	{
		cout<<"queue is overflow";
		return;
	}
 //find index
   int index=freespot;

// update freespot
  freespot=next[index];
  
  if(front[qn-1]==-1)
  {
  	front[qn-1]=index;
  }
  else
  {
   next[rear[qn-1]]=index;
  }
  next[index]=-1;
  
  rear[qn-1]=index;
  
  arr[index]=data;
  
}

int dequeue(int qn)
{
	if(front[qn-1]==-1)
	{
		cout<<"queue is underflow "<<endl;
		return -1;
	}
	
	int index= front[qn-1];
	
	front[qn-1]=next[index];
	
	next[index]=freespot;
	
	freespot=index;
	
	return arr[index];
}
};
int main()
{
	KQueue q(10,3);
	q.enqueue(12,1);
	q.enqueue(22,1);
	q.enqueue(32,2);
	q.enqueue(10,3);
	q.enqueue(20,2);
	q.enqueue(15,2);
	q.enqueue(25,1);
	q.enqueue(30,1);
	q.enqueue(35,3);
	//q.enqueue(40,3);
	//q.enqueue(45,1);
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(2)<<endl;
	cout<<q.dequeue(1)<<endl;
	cout<<q.dequeue(3)<<endl;
	cout<<q.dequeue(2)<<endl;
	
	
	return 0;
}