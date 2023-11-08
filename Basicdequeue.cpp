#include<deque>
#include<iostream>
using namespace std;
int main()
{
	deque<int>dq;
	dq.push_front(1);
	dq.push_front(2);
	dq.push_front(5);
	dq.push_front(8);
	dq.push_front(9);
	dq.push_front(10);
	dq.push_front(11);
	cout<<"front element "<<dq.front();
	cout<<endl;
	dq.push_back(4);
	dq.push_back(20);
	dq.push_back(50);
	dq.push_back(80);
	dq.push_back(90);
	dq.push_back(100);
	dq.push_back(120);
	cout<<"back element "<<dq.back();
	return 0;
	
}