#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//create class
class Tree{
	public:
		int data;
		Tree*left,*right;
	Tree(int d)
	{
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
//tree bannuo
Tree*Buildtree(Tree*root)
{
	cout<<"Enter the data "<<endl;
	int data;
	cin>>data;
	root=new Tree(data);
	if(data==-1)
	{
		return NULL;
	}
	
 cout<<"Enter data for inserting in left of "<<data<<endl;
 root->left=Buildtree(root->left);
 
 cout<<"Enter data for inserting in right side of "<<data<<endl;
 root->right=Buildtree(root->right);
 return root;
}
//level order traversal
void LevelorderTraversal(Tree*root)
{
//base case
if(root==NULL) 
 return;
//create queue
 queue<Tree*>q;
 q.push(root);
  q.push(NULL);
  
  while(!q.empty())
  {
  	Tree*temp=q.front();
  	          q.pop();
  	if(temp==NULL)
  	{
  		cout<<endl;
  		if(q.empty())
  		{
  			q.push(NULL);
		  }
	  }
	  else
	  {
	  	cout<<temp->data<<" ";
	  
	if(temp->left)
	q.push(temp->left);
	
	if(temp->right)
	q.push(temp->right);
	}
  }
}
void InOrder(Tree*root)
{
	if(root==NULL)
	return;
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}
void PreOrder(Tree*root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void PostOrder(Tree*root)
{
	if(root==NULL)
	return;
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}
//find height
int height(Tree*root)
{
	if(root==NULL)
	return 0;
	
	int l=height(root->left);
	int r=height(root->right);
	return max(l,r)+1;
}
//find the mirror image in single tree
void isMirror(Tree*root)
{
   if(root==NULL)
   return;
   queue<Tree*>q;
   q.push(root);
   while(!q.empty())
   {
   	Tree*temp=q.front();
   	          q.pop();
   	swap(temp->left, temp->right);
   	
   	if(temp->left)
   	q.push(temp->left);
   	
   	if(temp->right)
   	q.push(temp->right);
   }
}
//count leaf nodes
int NumberOfLastNode(Tree*root)
{
	int count=0;
	queue<Tree*>q;
	q.push(root);
	while(!q.empty())
	{
		Tree*temp=q.front();
		        q.pop();
		        
		if(temp->left==NULL && temp->right==NULL)
		{
			count++;
		}
	if(temp->left)
	q.push(temp->left);
	if(temp->right)
	q.push(temp->right);
	}
	return count;
}

int main()
{
  Tree*root=NULL;
  root =Buildtree(root);
  LevelorderTraversal(root);
   NumberOfLastNode(root);
  return 0;
}