#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
bool isoperator(char c)
{
	if(c=='+' ||c=='-'||c=='*'||c=='/'||c=='^')
	return true;
	else
	return false;
}
int precedence(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*' || c=='/')
	return 2;
	else if (c=='+' ||c=='-')
	return 1;
	else 
	return -1;
}
string InfixToPrefix(stack<char>s,string infix)
{
string prefix;
reverse(infix.begin(),infix.end());
for(int i=0;i<infix.size();i++)
{
if(infix[i]=='(')
{
	infix[i]=')';
}
else if(infix[i]==')')
{
	infix[i]='(';
}
}
for(int i=0;i<infix.size();i++)
{
 if((infix[i]>='a' && infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z'))
 {
 	prefix+=infix[i];
 }
else if(infix[i]=='(')
{
	s.push(infix[i]);
}
else if(infix[i]==')')
{
while((s.top()!='(') && (!s.empty()) )
{
	prefix +=s.top();
	s.pop();
}
if(s.top()=='(')
{
	s.pop();
}
}
else if(isoperator(infix[i]))
{
	if(s.empty())
	{
		s.push(infix[i]);
	}
else
{
if(precedence(infix[i])>precedence(s.top()))
{
	s.push(infix[i]);
}
else if(  (precedence(infix[i])==precedence(s.top()))  && (infix[i]=='^')  )
{
	while((precedence(infix[i])==precedence(s.top())) && (infix[i]=='^'))
	{
		prefix+=infix[i];
		s.pop();
	}
s.push(infix[i]);
}
else if(precedence(infix[i])>precedence(s.top()))
{
	s.push(infix[i]);
}
else
{
	while((!s.empty()) && ((precedence(infix[i])<precedence(s.top()))))
	{
		prefix+=s.top();
		s.pop();
	}
s.push(infix[i]);
}
}
}
}
while(!s.empty())
{
	prefix+=s.top();
	s.pop();
}
reverse(prefix.begin(),prefix.end());
return prefix;
}
int main()
{
string infix,prefix;
cout<<"Enter the expression for infix"<<endl;
cin>>infix;
stack<char>s;
cout<<"Infix expression is "<<endl;
prefix=InfixToPrefix(s,infix);
cout<<"Prefix expression is "<<prefix<<endl;
return 0;
}