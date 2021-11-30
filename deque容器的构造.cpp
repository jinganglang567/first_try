//dequeË«¶ËÊı×é
#include<iostream>
using namespace std;
#include<deque>
void print(const deque<int>&d)
{
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
void test()
{
	deque<int>d;
	int i=0;
	for(i=0;i<10;i++)
	{
		d.push_back(i);
	}
	print(d);
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
