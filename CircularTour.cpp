#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class petrolPump{
	public:
	int petrol;
	int distance;
};
int printTour( petrolPump p[] , int n)
{
	int defficency=0;
	int start=0;
	int balance=0;
	for(int i=0;i<n;i++)
	{
		balance+=p[i].petrol-p[i].distance;
		
		if(balance<0)
		{
			defficency+=balance;
			start=i+1;
			balance=0;
		}
		
	}
	if(balance+defficency>=0)
	{
		return start;
	}
	else
	{
		return -1;
	}
}
int main()
{
	petrolPump arr[]={ { 6, 4 }, { 3, 6 }, { 7, 3 } };
	int n=sizeof(arr)/sizeof(arr[0]);
	int s=printTour(arr,n);
	if(s==-1)
	{
		cout<<"no solution"<<endl;
	}
	else
	{
		cout<<"start= "<<s;
	}
	return 0;
}