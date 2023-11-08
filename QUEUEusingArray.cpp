#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	q.push(1);
	cout<<"Front of the queue "<<q.front()<<endl;
	q.push(2);
	cout<<"Front of the queue "<<q.front()<<endl;
	q.push(4);
	cout<<"Front of the queue "<<q.front()<<endl;
	q.push(8);
	cout<<"Front of the queue "<<q.front()<<endl;
	cout<<"size of queue"<<q.size()<<endl;
	q.pop();
if(q.empty())
{
 cout<<"Queue is empty "<<endl;
}	
else
{
 cout<<"Queue is NOT empty "<<endl;
	}
return 0;
	}