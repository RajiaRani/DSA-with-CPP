#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
	}
};
Node* insert(Node* root, int x)
{
	if(root==NULL)
	return new Node(x);
	
	if(x<root->data)
	root->left=insert(root->left, x);
	
	if(x>root->data)
	root->right=insert(root->right, x);
	
	return root;
}

int count=0;
Node* KthSmallest(Node* root, int& k)
{

	if(root==NULL)
	return NULL;
	
	Node* left=KthSmallest(root->left, k);
	
	if(left!=NULL)
	 return left;
	
	count++;
	
	if(count==k)
	return root;
	
	return KthSmallest(root->right, k);  
	 
}
void print(Node* root, int k)
{
	Node*ans=KthSmallest(root, k);
	if(ans==NULL)
	cout<<"there in no k value exisit";
	else
	cout<<" Kth-Smallest Element is = "<<ans->data;
}
int main()
{
	Node* root=NULL;
	int arr[]={20,8,22,4,12,10,14};
	for(int x : arr)
	root=insert(root,x);
	int k=3;
	print(root, k);
	return 0;
}