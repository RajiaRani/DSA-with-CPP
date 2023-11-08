#include <iostream>
using namespace std;
void arrayEvenandOdd(int a[],int n)
{
    int i=-1;
    int j=0;
    while(j!=n)
    {
        if(a[j]%2==0)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main() {
	int a[]={1,2,3,4,7,6,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	arrayEvenandOdd(a,n);
	return 0;
}