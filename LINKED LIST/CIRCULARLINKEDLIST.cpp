#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
   ~Node()
   {
   	int value=this->data;
   	if(this->next!=NULL)
   	{
   		delete next;
   		next=NULL;
	   }
	cout<<"memory is free for node with data "<<value<<endl;
   }
};
void insertNode(Node*&tail,int element,int d)
{
	if(tail==NULL)
	{
	Node*temp=new Node(d);
	tail=temp;
	temp->next=temp;
	}
	else
	{
	Node*curr=tail;
	while(curr->data!=element)
	{
		curr=curr->next;
	}
	Node*temp1=new Node(d);
	temp1->next=curr->next;
	curr->next=temp1;
}
}
void deleteNode(Node*&tail,int value)
{
	if(tail==NULL)
	{
		return;
	}
	Node*prev=tail;
	Node*curr=prev->next;
	while(curr->data!=value)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	if(tail==curr)
	{
		tail=prev;
	}
	curr->next=NULL;
	delete curr;
}
void print(Node*&tail)
{
     Node*temp=tail;
	do
	{
		cout<<tail->data<<" ";
		tail=tail->next;
	}
	while(tail!=temp);
	cout<<endl;
}
int main()
{
    Node*tail=NULL;
    
	insertNode(tail,5,3);
	print(tail);
	insertNode(tail,3,5);
	print(tail);
	insertNode(tail,5,7);
	print(tail);
	insertNode(tail,7,9);
	print(tail);
	insertNode(tail,5,6);
	print(tail);
	insertNode(tail,9,10);
	print(tail);
	insertNode(tail,3,4);
	print(tail);
	
	deleteNode(tail,5);
	print(tail);
	
	deleteNode(tail,3);
	print(tail);
	return 0;
}