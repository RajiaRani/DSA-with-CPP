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
void insertAtHead(Node*&head, int d)
{
	Node*temp=new Node(d);
	temp->next=head;
	head=temp;
}
void insertAtTail(Node*&tail, int d)
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
int main()
{
	Node*n1=new Node(10);
	//Node*head=n1;
//	print(head);
//	insertAtHead(head,20);
//	print(head);
    Node*head=n1;
     print(head);
    Node*tail=n1;
    
	insertAtTail(tail,30);
	print(head);
	
	return 0;
}