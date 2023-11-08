#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int>& st, int topele)
{
//base case
 if(st.empty())
 {
 	st.push(topele);
 	
 }
 else
 {
//remove the elemets untill the stack is empty
 	
	 int num=st.top();
 	        st.pop();
 	        
//recurion
 insertAtBottom(st,topele);
 
 
//push the removed elements again into the stack
 st.push(num);
}
}

void Reverse(stack<int>& st)
{

if(st.size()>0)
{
//remove and after store the top element 
//topele=top element of the stack
   int topele=st.top();
             st.pop();

//recursion
Reverse(st);

insertAtBottom(st,topele);
}
return;
}


int main()
{
stack<int> st,st2;
for(int i=1;i<=5;i++)
{
	st.push(i);
}

st2=st;

cout<<"original stack"<<endl;
while(!st2.empty())
{
cout<<st2.top()<<" ";
     st2.pop();
}
cout<<endl;

Reverse(st);
cout<<"Reverse stack"<<endl;
while(!st.empty())
{
	cout<<st.top()<<" ";
	st.pop();
}

return 0;
}