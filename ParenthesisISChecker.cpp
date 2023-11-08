#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool areBraketBalanaced(string expr)
{
stack<char>s;
for(int i=0;i<expr.size();i++)
{
if(s.empty())
{
	s.push(expr[i]);
}
else if((s.top()=='(' && expr[i]==')') || ( s.top()=='[' && expr[i]==']') || (s.top()=='{' && expr[i]=='}'))
{
	s.pop();
}
else
{
	s.push(expr[i]);
}
}
if(s.empty())
{
	return true;
}
return false;
}
int main()
{
string expr="([{}])";
if(areBraketBalanaced(expr))
cout<<"Balanced"<<endl;
else
cout<<"Not Balanced";
return 0;
}