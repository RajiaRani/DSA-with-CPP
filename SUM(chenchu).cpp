#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  sum(long long int a[],long long int n)
{
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		
		
	}
	return sum;
}
int main()
{
 long long int a[]={10000,35000,70000,50000,70000,22000,50000,70000,35000,45000,12000,140000,70000,22000,10000,50000,100000,15000,360000,130000,50000,46000,20000,7000,5000};
 long long int n=sizeof(a)/sizeof(a[0]);
 cout<<sum(a,n);
 return 0;

}
//theek=10,000;
//ankura=35,000
//rainbow=70,000
//iphone=50,000 
//tv=70,000
//ring=22,000
//goa=50,000
//punjab 1st time=70,000
//punjab mai=35,000
//3rd time punjab=45,000
//watch=12,000
//ilets+gre=1,40,000
//PR process=70,000
//filter+mixer=22000
//induction=10,000
//laddi=50,000
//iPad=1,00,000
//scooty=15,000
//overroll rent=3,60,000
//food=1,30,000
//shopping=50,000
//bean bag=7000
//tab+study table=5000
//home travell+diwali=46,000
//ganesh churtity=20,000

