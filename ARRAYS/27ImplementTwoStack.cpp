#include<iostream>
using namespace std;
class twostack{
	private:
		int *a;
		int size;
		int top1,top2;
	public:
	twostack(int n)
		{
			size=n;
		a=new int [n];
		top1=-1;
		top2=size;
		}
	int push1(int x)
	{
		
		if(top1<top2-1)
		{
			top1++;
			a[top1]=x;
		}
		else
		{
			cout<<"stack is overflow";
			exit(1);
		}
	}
	int push2(int x)
	{
		
		if(top1<top2-1)
		{
			top2--;
			a[top2]=x;
		}
		else
		{
				cout<<"stack is overflow";
			exit(1);
		}
	}
int pop1()
{
	if(top1>=0)
	{
		int x=a[top1];
		top1--;
		return x;
		}
	else
	{
		cout<<"stack is underflow";
		exit(1);
	}
}
int pop2()
{
	if(top2<size)
	{
		int x=a[top2];
		top2++;
		return x;
			}
	else
	{
		cout<<"stack is underflow";
		exit(1);
	}
}
};
int main()
{
	twostack s(6);
	s.push1(5);
	s.push2(10);
	s.push2(15);
	s.push1(11);
	s.push2(7);
	cout<<"popped element from stack1 -> "<<s.pop1()<<endl;
	s.push2(40);
	cout<<"popped element fro stack2 -> "<<s.pop2();
	return 0;	
}