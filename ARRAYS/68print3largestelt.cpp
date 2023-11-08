#include <stdio.h>
#include<iostream>
using namespace std;
void print3largestelt(int a[],int n)
{
    if(n<3)
    {
        cout<<"invalid array";
        return;
    }
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            third=second;
            second=a[i];
        }
        else if(a[i]>third && a[i]!=second)
        third=a[i];
    }
    cout<<"The largest three elements are"<<first<<" "<< second<<" "<<third;
}


int main() {
	int a[]={10,4,5,78,50,7,13};
	int n=sizeof(a)/ sizeof a[0];
	print3largestelt(a,n);
	
	return 0;
}