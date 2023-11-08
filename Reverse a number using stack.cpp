//Reverse a number using stack
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int number= 12345;
stack<int>s;
for(int i=0;i<=number.size();i++)
{
	int num=munber[i];
	s.push(num);
}
int ans="";
while(!s.empty())
{
	int ch=s.top();
	      ans.push_back(ch);
	      s.pop();
}
cout<<"ans is "<<ans<<endl;
return 0;
}