#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//create class
class Node{
	public:
		int data;
		Node *left;
		Node *right;
	Node(int d)
	{
		this ->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
//tree create karna
Node* BuildTree(Node*root)
{
	cout<<"Enter the data "<<endl;
	int data;
	cin>>data;
	root=new Node(data);
	
//check karo ki anne wala data -1 hai to wo Null hogi 
if(data == -1)
    {
    	return NULL;
	}
   
// left side pr implimentation
    cout<<"Enter the data for inserting of the left side "<<data<<endl;
    root->left= BuildTree(root->left);
    
// insert at right side
     cout<<"Enter the data for inserting of the right side "<<data<<endl;
    root->right= BuildTree(root->right);
    
    return root;
}
//LEVEL ORDER TRAVERSAL
void levelOrderTraversal(Node *root)
{
// quee banna lo
 queue<Node*>q;
 // root node q mein push kar do  and phir Null ko
  q.push(root);
   q.push(NULL);
   
//jab tak queue empty nhi ho jata and pointer null pr nhi atta element remove karte jauo
 while(!q.empty())
 {
 	Node *temp=q.front();
 	           q.pop();
 	           
 	if(temp==NULL)
 	{
 		//agar temp NULL pr aa gya hai to hum next order pr jayege
 		cout<<endl;
 	  if(!q.empty())
 	  {
 	  	q.push(NULL);
	   }
	 }
else
 {
 	  {
	   cout<<temp->data<<" ";
}
 
// left side ke liye
 if(temp->left)
   {
   q.push(temp->left);
}
 //right side ke liye
 if(temp->right)
   {
   q.push(temp->right);
} 
 }
 }
}
//inorder =NLR
void Preorder(Node*root)
{
//base case
if(root==NULL)
return;
 cout<<root->data<<" ";
 Preorder(root->left);
 Preorder(root->right);
}
//inorder=LNR
void Inorder(Node*root)
{
	if(root==NULL)
	return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
//postorder=LRN
void Postorder(Node*root)
{
	if(root==NULL)
	return;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}
void ReverseLevelOrdertraversal(Node*root)
{
	//create queue
	queue<Node*>q;
	//create stack
	stack<Node*>s;
//root node ko queue mein push karo
    q.push(root);


//jab tak queue khali na ho jaye
while(!q.empty())
{
	Node*temp=q.front();
	          q.pop();
// stack mein dal do
          s.push(root);	          
	          
//right side ko process karo
	if(temp->right)
	q.push(root->right);
// left side ko process karo
  if(temp->left)
    q.push(temp->left);
    
}
//ab stack se sabhi elements nikal do
  while(!s.empty())
  {
  	Node*temp=s.top();
  	cout<<temp->data<<" ";
  	          s.pop();
	  }	
}

int main()
{
  Node *root= NULL;
  root=BuildTree(root);
  levelOrderTraversal(root);
   cout<<"Pre-Order of the tree is ";
   Preorder(root);
   cout<<endl;
   cout<<"In-Order of the tree is ";
   Inorder(root);
   cout<<endl;
   cout<<"Post-Order of the tree is ";
   Postorder(root);
   cout<<endl;
   cout<<"Reverse the Level Order ";
   ReverseLevelOrdertraversal(root);
   return 0 ;
}
