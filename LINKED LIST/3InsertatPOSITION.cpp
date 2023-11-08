#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
void insertathead(Node*&head, int d)
{
	Node*temp=new Node(d);
	temp->next=head;
	head=temp;
}
void insertattail(Node*&tail, int d)
{
	Node*temp=new Node(d);
	tail->next=temp;
	temp=tail;
}
void print(Node*&head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insertatPosition(Node*&head,Node*&tail, int d, int pos)
{
	if(pos==1)
	{
	 insertathead(head,d);
	 return;	
	}
	Node*temp=head;
	int count=1;
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
 
 
   if(temp->next==NULL)
   {
   	insertattail(tail,d);
   	return;
   }
	Node*nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

int main()
{
	Node*n1=new Node(10);
	Node*head=n1;
	Node*tail=n1;
	print(head);
	insertathead(head,20);
	print(head);
	insertattail(tail,30);
	print(head);
	insertatPosition(head,tail,4,22);
	return 0;
}
