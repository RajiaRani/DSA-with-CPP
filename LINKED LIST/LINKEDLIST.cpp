#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*next;
		
		Node(int data)
		
		{
			this->data=data;
			this->next=NULL;
			
		}
};
void insertathead( Node* &head,int d)
{
	Node*temp=new Node(d);
	temp->next=head;
	head=temp;
}
void print(Node* &head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	//	head=temp;
	}
}

int main()
{
	Node* n1=new Node(10);
	
   // cout<<n1->data<<endl;
   //	cout<<n1->next<<endl;
	 
    Node* head=n1;
   // print(head);
    
	insertathead(head,20);
	print(head);
	
	return 0;
	
}