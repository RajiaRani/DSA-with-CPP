#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	public:
		int data;
		struct Node* left;
		struct Node *right;
};
void ReverseLevelorderTravesal( Node*root)
{
	 stack <Node *> s;
	 queue <Node *> q;
	q.push(root);
 
 while(!q.empty())
 {
 	 Node*temp=q.front();
 	   q.pop();
 	            
   s.push(temp);
   
  if(temp->right)
  {
  	q.push(temp->right);
  }
  if(temp->left)
  {
  	q.push(temp->left);
  }
 }
 while(!s.empty())
 {
 	Node* temp=s.top();
 	cout<<temp->data<<" ";
 	        s.pop();
 }
	
}
Node* newNode(int data)
	{
		Node* root=new Node();
		root->data=data;
		root->left=NULL;
		root->right=NULL;
		return(root);
	}
int main()
{
	struct Node*root=newNode(1);
	      root->left=newNode(2);
	      root->right=newNode(3);
	      root->left->left=newNode(4);
          root->left->right = newNode(5);
          root->right->left  = newNode(6);
          root->right->right = newNode(7);
 
    cout << "Level Order traversal of binary tree is \n";
    ReverseLevelorderTravesal(root);
    return 0;
}
	