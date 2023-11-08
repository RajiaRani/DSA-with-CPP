#include<iostream>
#include<queue>
using namespace std;
int SumOfKsubArray(int *arr,int n,int k)
{
	deque<int>max(k);
	deque<int>min(k);
	
	for(int i=0;i<k;i++)
	{
	 while(!max.empty() && arr[max.back()]<=arr[i])
	    max.pop_back();
		
	while(!min.empty() && arr[min.back()]>=arr[i])
	    min.pop_back();
	
	max.push_back(i);
	min.push_back(i);
	}

 int sum=0;
 sum+=arr[max.front()] + arr[min.front()];
 
 
 for(int i=k;i<n;i++)
 {
while(!max.empty() && i-max.front()>=k){
     max.pop_front();}
	
while(!min.empty() && i-min.front()>=k){
     min.pop_front();}
	
	   

while(!max.empty() && arr[max.back()]<=arr[i])
     max.pop_back();
		

while(!min.empty() && arr[min.back()]>=arr[i])
     min.pop_back();
	

max.push_back(i);
min.push_back(i);

sum+=arr[max.front()] + arr[min.front()];
}

 return sum;
}
int main()
{
	int arr[]={2, 5, -1, 7, -3, -1, -2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=4;
	cout<<"Sum of the array is "<<SumOfKsubArray(arr,n,k)<<endl;
	return 0;
}