#include<iostream>
#include<stack>
using namespace std;
void 	printNSLE(int a[],int n)
{
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		while(!s.empty() && a[i]<=s.top())
		s.pop();
		if(s.empty())
		cout<<"- ,";
		else
		cout<<s.top()<<" , ";
		s.push(a[i]);
		
	}
}
int main()
{
	int a[]={1,3,0,2,5};
	int n=sizeof(a)/sizeof(a[0]);
	printNSLE(a,n);
	return 0;
}