#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printNSE(vector<int>& a)
{
	stack<int>s;
	int n=a.size();
	vector<int>reduce(n,0);
	for(int i=n-1;i>=0;i--)
	{
		if(!s.empty())
		{
			if(s.top()<=a[i])
			{
			 reduce[i]=s.top();
			}
		else
			{
			while(!s.empty() && (a[i]<s.top()))
				{
					s.pop();				  
					}
			
			
			if(!s.empty())
			{
				reduce[i]=s.top();
				
			  }  
			
	}
		}
		s.push(a[i]);
	} 
	for (int i = 0; i <n; i++)
        cout << a[i] - reduce[i] << " ";
	
}
int main()
{
	vector<int>a={8,4,6,2,3};
	
	printNSE(a);
	return 0;
}