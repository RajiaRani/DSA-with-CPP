#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>& s,int x)
{
//create new stack
stack<int>temp;
//insert all the elements of s stack to temp stack
while(!s.empty())
{
 int top=s.top();
    temp.push(top);
      s.pop();
}
//insert new element at the bottom
  s.push(x);
  
//insert temp elements into stack elements
while(!temp.empty())
{
	int top1=temp.top();
	s.push(top1);
	temp.pop();
}

while(!s.empty())
{
	cout<<s.top()<<" ";
	s.pop();
}
}
int main(){
	stack<int>s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	
	int x=6;
	insert_at_bottom(s,x);	
	return 0;
}