#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*prev;
		Node*next;
	Node(int d)
	{
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	}
	~Node()
	{
		int val=this->data;
		if(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"memory free for node with data "<<val<<endl;
	}
};

int getLength(Node*head)
{
	Node*temp=head;
	int len=0;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
		}
		return len;
}
Node*insetHead(Node*&head,Node*&tail,int d)
{
	if(head==NULL)
	{
		Node*temp=new Node(d);
		head=temp;
		tail=temp;
		}
		else
	{
	 Node*temp=new Node(d);
	 temp->next=head;
	 head->prev=temp;
	 head=temp;
}
}
void print(Node*head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
Node*insertatTail(Node*&head,Node* &tail,int d)
{
	if(tail==NULL)
	{
		Node*temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else
	{
	Node*temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	}
}
void insertatPosition(Node*&head,Node*&tail,int position,int d)
{
	if(position==1)
	{
		insetHead(head,tail,d);
		return ;
	}
	Node*temp=head;
	int count=1;
	while(count<position-1)
	{
		count++;
		temp=temp->next;
	}
	if(temp->next==NULL)
	{
		insertatTail(head,tail,d);
		return;
	}
	Node*insertnode=new Node(d);
	insertnode->next=temp->next;
	temp->next->prev=insertnode;
	temp->next=insertnode;
	insertnode->prev=temp;
}
void deleteNode(Node*&head,int pos)
{
	if(pos==1)
	{
		Node*temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node*curr=head;
		Node*prev=NULL;
		int cnt=1;
		while(cnt<pos)
		{
		prev=curr;
		curr=curr->next;
		cnt++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}
int main()
{
	Node*n1=new Node(10);
	//cout<<getLength(head);
	Node*head=n1;
    Node*tail=n1;
	print(head);
	
	insetHead(head,tail,12);
	print(head);
	insetHead(head,tail,16);
	print(head);
	insetHead(head,tail,19);
	print(head);

	insertatTail(head,tail,20);
	print(head);
	insertatPosition(head,tail,3,67);
	print(head);
	 deleteNode(head,2);
	 print(head);
	
	return 0;
}