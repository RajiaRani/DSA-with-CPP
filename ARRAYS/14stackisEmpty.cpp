#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int a[5];
		public:
			stack()
			{
				top=-1;
				for(int i=0;i<5;i++)
				{
					a[i]=0;
				}
			}
bool isEmpty()
{
	if(top==-1)
	return true;
	else
	return false;
}
void push(int val)
{
	if(isEmpty())
	{
		cout<<" stack is underflow "<<endl;
	
	}
	else
	{
		top++;
		a[top]=val;
	}
}
};
int main()
{
	int s;
	s.push(6);
	if(s.isEmpty())
	cout<<" stack is empty"<<endl;
	else
		cout<<" stack is not empty"<<endl;
	return 0;
}