#include<iostream>
using namespace std;
/*
int fib(int n)
{
	//base case
	if(n==0 || n==1)
	return n;
	
	else
	return fib(n-1)+fib(n-2);
}**/
int fib(int n)
{
	int a=0;
	int b=1;
	int c;
	if(n==0)
	return 0;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
int main()
{
	int n, i=0;
	cout<<"Enter the nth number = ";
	cin>>n;
	cout<<"Fibonic series is below"<<endl;
	while(i<n)
	{
		cout<<" "<<fib(i);
		i++;
	}
	cout<<" ";
	return 0;
}