#include<iostream>
using namespace std;
int minCost(string & s)
{
  bool alphabets[26]={false};

 for(int i=0;i<s.size();i++)
 {
 	alphabets[s[i]-97]=true;
 	
 	int count=0;
 	for(int i=0;i<s.size();i++)
 	{
 		if(alphabets[i])
 		count++;
	 }
	 return count;
 }
 
}
int main()
{
	string s= "abab";
	cout << "Total cost to construct "<< s << " is " << minCost;
 
    return 0;
}