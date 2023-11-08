#include<iostream>
using namespace std;
int FindSellBuy(int price[], int n)
{
int mini=price[0];
int profit=0;
for(int i=1;i<n;i++)
{
	int diff=price[i]-mini;
	profit=max(profit,diff);
	mini=min(mini,price[i]);
}
return profit;
}
int main()
{
int price[]= {100,180,260,310,40,535,695};
int n=sizeof(price)/sizeof(price[0]);
 cout<<FindSellBuy(price,n);
return 0;
}