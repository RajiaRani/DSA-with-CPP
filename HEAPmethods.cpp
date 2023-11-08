#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Minheap{
	public:
		int arr[100];
		int size=0;
		
	Minheap()
	{
		arr[0]=-1;
		size=0;
	}
void Insert(int value)
{
	//no element is present
	size=size+1;
	int index=size;
	arr[index]=value;
	
	while(index>1)
	{
	int parent=(index)/2;
	//agar parent big ho left or right se to swap karo
	if(arr[parent]>arr[index])
	{
		swap(arr[index], arr[parent]);
		index=parent;
	}
	else
	return;
	}
}

void print()
{
	for(int i=1;i<=size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void deleteheap()
{
// step1 ::if no elemet present
if(size==0)
{
	cout<<"Nothing to delete "<<endl;
	return ;
}
//step2:: first ko last se exchange karo
 arr[1]=arr[size];
 //last wala delete kar do
 size--;
//step3:: 
 int i=1;
 while(i<size)
 {
 	int leftindex= 2*i;
 	int rightindex =2*i+1;
 	
 	if(leftindex<size && arr[i]>arr[leftindex])
 	{
 		swap(arr[i] ,arr[leftindex]);
 		i=leftindex;
	 }
  else if(rightindex<size && arr[i]>arr[rightindex])
  {
  	swap(arr[i],arr[rightindex]);
  	i=rightindex;
  }
  else
  {
  	return;
  }
 }
}
};
int main()
{
	Minheap mh;
	mh.Insert(50);
	mh.Insert(54);
	mh.Insert(57);
	mh.Insert(51);
	mh.Insert(49);
	mh.Insert(52);
	mh.print();
	mh.deleteheap();
	mh.print();
	return 0;
}