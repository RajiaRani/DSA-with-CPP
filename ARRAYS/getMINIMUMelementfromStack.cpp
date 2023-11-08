#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Mystack{
public:
	stack<int>s;
	int minEle;
	
void getMin()
{
if(s.empty())
{
	cout<<" stack is empty ";
}
else
cout<<"Minimum element in the stack is "<<minEle<<" "<<endl;
}
//find the top element	
void peek()
{
if(s.empty())
{
cout<<"stack is empty "<<endl;
return;
}
int t=s.top();
cout<<"the most element is"<<endl;
if(t<minEle)
cout<<t<<" ";
}
//pop element	
void pop()
{
	if(s.empty())
	{
	cout<<"stack is empty"<<endl;
	return;
	}
cout<<"the most element removed "<<endl;
int t=s.top();
    s.pop();
if(t<minEle)
{
cout<<minEle<<" "<<endl;
minEle=2*minEle-t;	
}
}

//push the number 
void push(int x)
{
if(s.empty())
{
	minEle=x;
	s.push(x);
	cout<<"inserted element is "<<x<<endl;
	return;
}
else if(x<minEle)
{
	s.push(2*x-minEle);
	minEle=x;
	//s.push(x);
}
else
s.push(x);
cout<<"number inserted "<<x<<" "<<endl; 
}
};
int main()
{
	Mystack s;
	s.push(2);
	s.push(3);
	s.push(1);
	s.getMin();
	s.push(1);
	s.getMin();
	s.pop();
	s.getMin();
	s.pop();
	s.peek();
	return 0;
}