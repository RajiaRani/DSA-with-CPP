#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& inputstack,int count,int n)
{
	if(count==n/2)
	{
		inputstack.pop();
		return;	}
	int num= inputstack.top();
	        inputstack.pop();
	        
//recursion
 solve(inputstack,count+1,n);
  inputstack.push(num);
}
void deleteMid(stack<int>& inputstack,int n)
{
	int count=0;
	solve(inputstack,count,n);
}
int main()
{
	int n;
 stack<int>inputstack;
 inputstack.push(1);
 inputstack.push(2);
 inputstack.push(4);
 inputstack.push(5);
 inputstack.push(7);
 inputstack.push(9);
 inputstack.push(12);
 deleteMid(inputstack,n);
 while(!inputstack.empty())
{
	int t=inputstack.top();
	      inputstack.pop();
	      cout<<t<<" ";
 } 
 return 0;
}