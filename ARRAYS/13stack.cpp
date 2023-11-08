#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>stack;
	stack.push(12);
	stack.push(22);
	stack.push(62);
	stack.push(72);
	stack.push(82);
	stack.pop();
	stack.pop();
	while(!stack.empty())
	{
		cout<< stack.top()<<"   ";
		stack.pop();
	}
	return 0;
	
}