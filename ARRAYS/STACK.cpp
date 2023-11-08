#include<iostream>
using namespace std;
class stack{
	public:
		int *arr;
		int size;
		int top;

stack(int size)
{
	this->size=size;
	top=-1;
	arr=new int[size];
}
//push operation
void push(int value)
{
	if(size-top>1)
	{
		top++;
		arr[top]=value;
	}
	else
	{
		cout<<"satck is overflow";
	//	return -1;
	}
}
//pop or remove operation
void pop()
{
	if(top>=0)
	{
		top--;
	}
	else
	{
		cout<<"stack is underflow";
	}
}
int peek()
{
	if(top>=0)
	return arr[top];
else
{
	cout<<"stack is empty "<<endl;
	return -1;
}
}
bool isempty()
{
if(top==-1)
   return true;
   else
   return false;
}
};
int main()
{
	stack s(6);
	s.push(1);
    s.push(2);
	s.push(3);
	s.push(4);
   cout<<s.peek()<<endl;
   s.pop();
   cout<<s.peek()<<endl;
    s.pop();
   cout<<s.peek()<<endl;
     s.pop();
   cout<<s.peek()<<endl;
      s.pop();
    cout<<s.peek()<<endl;
if(s.isempty())

{
cout<<"Stack is empty "<<endl;
}
	else
	{
		cout<<"Stack is not empty "<<endl;
	}

	return 0;	
}