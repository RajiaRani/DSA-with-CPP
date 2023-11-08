#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverseEquation(string s)
{
 reverse(s.begin(),s.end());
 stack<char>st;
 string ans;
 for(int i=0;i<s.size();i++)
 {
 	if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
 	{
 		while(!st.empty())
 		{
 			ans.push_back(st.top());
 			            st.pop();
		 }
		 ans.push_back(s[i]);
	 }
	 else
	 {
	 	st.push(s[i]);
	 }
	
	 }
	 while(!st.empty())
	 {
	    ans.push_back(st.top());
	            st.pop();
		 }	
		 return ans;
}
int main(){
   string s="8*2-6+5/10";
   cout<<"after reversing the equation is "<<reverseEquation(s)<<endl;
	return 0;
}