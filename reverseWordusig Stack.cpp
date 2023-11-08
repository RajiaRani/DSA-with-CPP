#include<iostream>
#include<bits/stdc++.h>
using namespace std;
reverseWord(string s)
{
	stack<char>st;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=' ')
		st.push(s[i]);
	
else
{
	while(st.empty()==false)
	{
	cout<<st.top()<<" ";
	st.pop();	
	}
}
}
while(st.empty()==false)
{
	cout<<st.top()<<" ";
	st.pop();
}
}
int main()
{
string s="Geeks for Geeks";
reverseWord(s);
return 0;
}