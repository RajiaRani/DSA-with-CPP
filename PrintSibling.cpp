#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	struct Node*root=new Node();
	root->data=data;
	root->left=root->right=NULL;
	return root;
}
void PrintSibling(struct Node*root)
{
	if(root==NULL)
	return;
	
	queue<Node*>q;
	q.push(root);
	
	vector<int>ans;
	int flag=0;
	while(!q.empty())
	{
		Node*temp=q.front();
		 q.pop();
		 
	if(temp->left!=NULL && temp->right==NULL)
	{
		flag=1;
		ans.push_back(temp->left->data);
	}
	if(temp->left==NULL && temp->right!=NULL)
	{
		flag=1;
		ans.push_back(temp->right->data);
	}
	if(temp->left)
	q.push(temp->left);
	if(temp->right)
	q.push(temp->right);
	}
	sort(ans.begin(),ans.end());
	int n=ans.size();
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	if(n==0)
	{
		cout<<"-1";
	}
}

int main()
{
   struct Node*root=newNode(1);
   root->left=newNode(2);
   root->right=newNode(3);
    root->left->left=newNode(2);
   root->right->right=newNode(3);
    root->left->right=newNode(2);
   root->right->left=newNode(3);
    root->left->left->left=newNode(2);
   root->right->right->right=newNode(3);
   cout<<"Siblings are "<<"  ";
   PrintSibling(root);
   
	return 0;
}