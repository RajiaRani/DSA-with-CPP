#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
struct Node{
 int data;
 Node*left=NULL,*right=NULL;
 Node() {}
 Node(int data):data(data) {}	
};
Node*insert(Node*root, int val)
{
	if (root==NULL)
	return new Node(val);
	
	if(root->data>val)
	{
		root->left=insert(root->left,val);
	}
	else
	{
		root->right=insert(root->right,val);
	}
	return root;
}
void LevelOrder(Node*root)
{
	if(root==NULL)
	return;
	
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
			
			if(temp->left!=NULL)
			q.push(temp->left);
			
			if (temp->right!=NULL)
			q.push(temp->right);
	}
	}
}
void inorder(Node*root, queue<int>&ans)
{
	if(root==NULL)
	return;
	inorder(root->left,ans);
	ans.push(root->data);
	inorder(root->right,ans);
}
void preorder(Node*root, queue<int>&ans)
{
	if(root==NULL)
	return;
	
	root->data=ans.front();
	           ans.pop();
	preorder(root->left,ans);
	preorder(root->right,ans);
}
void convertBSTtoMinHeap(Node*root)
{
	//base case
	if(root==NULL)
	return;
	
	queue<int>ans;
	inorder(root,ans);
	preorder(root,ans);
}
int main()
{
	vector<int>ans={5,3,2,4,8,6,10};
	Node*root=NULL;
	for(int val:ans)
	{
		root=insert(root,val);
	}
	convertBSTtoMinHeap(root);
	LevelOrder(root);
	return 0;
 } 