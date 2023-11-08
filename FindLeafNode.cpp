#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	public:
		int data;
	    struct Node *left, *right;
	
};
Node* newNode(int data)
{
   Node *temp=new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return(temp);	
}
int FindLeafNode(Node* temp)
{
	int count=0;
queue<Node*>q;
q.push(temp);
  
  while(!q.empty())
  {
  	Node*temp1=q.front();
  	        q.pop();
  	        
//condition for the leaf node 
if(temp1->left == NULL && temp1->right==NULL)
{
	count++;
}
 if(temp1->left)
    q.push(temp1->left);
    
if(temp1->right)
q.push(temp1->right);
  }
  return count;
}
int main()
{
	struct Node *temp =newNode(1);
	temp->left=newNode(2);
	temp->right=newNode(3);
	temp->left->left=newNode(7);
	temp->left->right=newNode(9);
	temp->right->left=newNode(20);
	temp->right->right=newNode(21);
	cout<<"Leaf/last node of the binary tree "<<FindLeafNode(temp)<<endl;
	
	return 0;
}