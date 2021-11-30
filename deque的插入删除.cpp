#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
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
	//deque没有容量的概念，两头的插入删除
	//尾部
	d.push_back(12);
	//头部
	d.push_front(13);
	d.push_front(20);
	print(d); 
	//删除
	d.pop_back();
	d.pop_front();
	print(d); 
	d.insert(d.begin(),2,100);
	print(d);
	deque<int>::iterator it=d.begin();
	it++;
	d.erase(it);
	print(d);
	sort(d.begin(),d.end());
	print(d); 
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
