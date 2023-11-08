#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class solution{
	private:
		bool knows(vector<vector<int>> &M, int a, int b, int n)
		{
			if(M[a][b] == 1)
			return true;
			else
			return false;
		}
	public:
		int celebrity(vector<vector<int>> &M, int n)
		{
			stack<int>s;
			for(int i=0;i<n;i++){
				s.push(i);
			}
		while(s.size()>1){
			int a, b;
			a=s.top();
			  s.pop();
			
			b=s.top();
			    s.pop();
		if(knows(M,a,b,n))
		{
			s.push(b);
		}
		else{
			s.push(a);
		}
	}
	int ans=s.top();
	
	int onecount=0;
	int zerocount=0;
	for(int i=0;i<n;i++){
		if(M[ans][i] == 0)
		zerocount++;
	}
	if(zerocount != n)
	 return -1;
	 
	for(int i=0;i<n;i++){
		if(M[i][ans] == 1)
		onecount++;
	}
	if(onecount != n-1)
	 return -1;		
			
}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<vector<int>> M(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>M[i][j];
		}
	}

	solution ob;
	cout<<ob.celebrity(M,n)<<endl;
}
	return 0;
}