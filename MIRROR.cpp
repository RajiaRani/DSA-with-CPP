#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *left, *right;

};
struct Node*newNode(int data)
{
	struct Node*root=new Node();
	root->data=data;
	root->left=root->right=NULL;
	return(root);
}
void mirror(Node*root)
{
	if(root==NULL)
	return;
	queue<Node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		Node*temp=q.front();
		          q.pop();
	//swap kara do temp ka left and temp->right
	swap(temp->left, temp->right);
	
   //for left side
   if(temp->left)
   q.push(temp->left);
   
   //right side
   if(temp->right)
   q.push(temp->right);
	}
}
//inorder traversal
void Inorder(Node*root)
{
	if(root==NULL)
	return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
int main()
{
	struct Node*root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(21);
	root->left->right=newNode(20);
	root->right->left=newNode(12);
	root->right->right=newNode(2);
	cout<<"inorder traversal is "<<" ";
	Inorder(root);
	cout<<endl;
	mirror(root);
	cout<<"inorder traversal is "<<" ";
	Inorder(root);
	return 0;
}