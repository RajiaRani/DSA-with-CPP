#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
Node(int d)
{
	data=d;
	left=NULL;
	right=NULL;
}
};
Node*insert(Node* root, int d)
{
	if(root==NULL)
	return new Node(d);
	
	if(d<root->data)
	root->left=insert(root->left,d);
	
	if(d>root->data)
	root->right=insert(root->right,d);
	
	return root;
}
int count=0;
Node* KthLargest(Node* root, int& k)
{
	if(root==NULL)
	return NULL;
	
	Node*right=KthLargest(root->right, k);
	
	if(right!=NULL)
	return right;
	
	count++;
	if(count==k)
	return root;
	
	return KthLargest(root->left, k);
}
void print(Node* root, int k)
{
	Node*ans=KthLargest(root, k);
	if(ans==NULL)
	cout<<"No node exist";
	else
	cout<<"Kth-Largest Element is = "<<ans->data;
}
int main()
{
	Node*root=NULL;
	int arr[]={2,12,3,22,24,18,20,17,29};
	for(int d:arr)
	root=insert(root, d);
	int k=3;
	print(root, k);
	return 0;
}