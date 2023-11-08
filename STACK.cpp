#include<iostream>
using namespace std;
class stack{
	private:
		int arr[5];
		int top;
	public:
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
//check the stack is full or not
bool isfull()
{
	if(top==4)
	return true;
	else
	return false;
}
//check the stack is empty or not
bool isempty()
{
	if(top==-1)
	return true;
	else
	return false;
}
//push operation
void push(int val)
{
	if (isfull())
	{
		cout<<"stack is overflow "<<endl;
	}
	else
	{
		top++;
		arr[top]=val;
	}
}
//Pop operation
int pop()
{
	if(isempty())
	{
		cout<<"stack is underflow";
		return 0;
	}
	else
	{
		int popvalue=arr[top];
		arr[top]=0;
		top--;
		return popvalue;
	}
}
//Count the how many numbers are present in the stack
int count()
{
	return (top+1);
}
//find the peek
int peek(int pos)
{
	if(isempty())
	{
		cout<<"stack is underflow "<<endl;
		return 0;
	}
	else
	{
		return arr[pos];
	}
}
//change the value at particular position
void change(int pos,int val)
{
	arr[pos]=val;
	cout<<"value changed at location"<<pos<<endl;
}
//display the stack on screen
void display()
{
	cout<<"all values in the stack are "<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<" "<<endl;
	}
}
};
int main()
{
	stack s;
int pos,val,option;
do
{
cout<<"what operation you want to perform ? select option number enter 0 to exit "<<endl;
cout<<"1.push()"<<endl;
cout<<"2.pop()"<<endl;
cout<<"3.isEmpty()"<<endl;
cout<<"4.isFull()"<<endl;
cout<<"5.peek()"<<endl;
cout<<"6.count()"<<endl;
cout<<"7.change()"<<endl;
cout<<"8.Display()"<<endl;
cout<<"9.clear screen"<<endl;
cin>>option;
switch(option)
{
case 0:
	break;
case 1:
cout<<"enter an item to push in the stack"<<endl;
cin>>val;
s.push(val);
break;
case 2:
cout<<"enter an item to pop in the stack"<<endl;
cin>>val;
s.pop();
break;
case 3:
	if(s.isempty())
cout<<"stack is empty"<<endl;
else
cout<<"stack is not empty"<<endl;
break;
case 4:
if(s.isfull())
cout<<"stack is full"<<endl;
else
cout<<"stack is not full"<<endl;
break;
case 5:
cout<<"enter position of item you waant to peek"<<endl;
cin>>pos;
cout<<"peek function called valvue at postion"<<endl<<s.peek(pos)<<endl;
break;
case 6:
cout<<"count function is called - number of items in the stack are "<<s.count()<<endl;
break;
case 7:
cout<<"enter position of item you want to change "<<endl;
cin>>pos;
cout<<endl;
cout<<"enter value of item you want to change "<<endl;
cin>>val;
s.change(pos,val);
break;
case 8:
cout<<"display function "<<endl;
s.display()	;
break;
case 9:
system("cls");
break;
default:
	cout<<"enter proper option number "<<endl;
}
}
while(option!=0);
return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

