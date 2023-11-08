#include<iostream>
using namespace std;
class TwoStack{
private:
	int *arr;
	int top1, top2,size;
public:
//constructor
TwoStack(int n)
{
	size=n;
	arr=new int[n];
	top1=-1;
	top2=size;
}
//method to push the elements to stack 1
void push1(int x)
{
//check stack is not empty
if(top2-top1>1)
{
top1++;
arr[top1]=x;
}
else
{
	cout<<"stack1 is overflow ";
}

}

//push element into stack 2
void push2(int x)
{
//check the stack is empty
if(top2-top1>1)
{
	top2--;
	arr[top2]=x;
}
else
{
cout<<"Stack2 is overflow";
}

}

//method to remove the top element in stack1
int pop1()
{
if(top1>=0){
 int ans=arr[top1];
  top1--;
  return ans;
}
else
{
cout<<"stack1 is underflow";
return -1;
}

}
//method to remove the top element in stack2
int pop2()
{
	if(top2<size)
	{
		int ans=arr[top2];
		top2++;
		return ans;
	}
else
{
cout<<"stack is underflow";
return -1;
}

}		
};
int main()
{
TwoStack s(6);
s.push1(2);
s.push1(2);
s.push2(5);
s.push2(7);
s.push1(56);
cout<<"popped the elements of stack1 ="<<s.pop1()<<endl;
s.push2(6);
cout<<"popped the elements of stack2 ="<<s.pop2()<<endl;
return 0;

}






