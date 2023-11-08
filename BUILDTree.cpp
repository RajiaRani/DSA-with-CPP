#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node*left,*right;
		
	Node(int d)
	{
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
//create tree
Node* BuildTree(Node* root)
{
	cout<<"Enter the data "<<endl;
	int data;
	cin>>data;
	//create the first root
	root=new Node(data);
	
	if(data==-1)
	{
		return NULL;
	}
	cout<<"Enter data for inserting in the left of "<<data<<endl;
	root->left=BuildTree(root->left);
	
	cout<<"Enter data for inserting in the right of "<<data<<endl;
	root->right=BuildTree(root->right);
	
	return root;
}
void levelOrderTraversal(Node* root)
{
//create queue
queue<Node*>q;

q.push(root);
q.push(NULL);

while(!q.empty())
{
	Node*temp=q.front();
	           q.pop();
	           
	if(temp==NULL)
	{
		cout<<endl;
	if(!q.empty())
	{
	q.push(NULL);
	}
	}
else
{
	cout<<temp->data<<" ";
if(temp->left)
{
	q.push(temp->left);
}
if(temp->right)
{
	q.push(temp->right);
}
}
}
}
int main()

{
	Node* root=NULL;
	root=BuildTree( root);
	levelOrderTraversal(root);
	return 0;
}