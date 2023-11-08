#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
#define N 8
bool MATRIX[N][N]={{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};

bool knows(int a,int b)
{
	return MATRIX[a][b];
}
int findcelebrity(int n)
{
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		s.push(i);
	}
while(s.size()>1)
{
int a=s.top();
   s.pop();
int b=s.top();
   s.pop();
 if(knows(a,b)) 
 {
 	s.push(a);
  } 
else
{
	s.push(b);
}
}
int ans=s.top();
        s.pop();
for(int i=0;i<n;i++)
{
if((i!=ans) && knows(ans,i)|| !knows(i,ans))
return -1;
 } 
return ans;
}
int main()
{
	int n=4;
	int id=findcelebrity(n);
	id= -1? cout<<"no celebrity"
	:cout<<"celebrity id"<<id;
	return 0;
}