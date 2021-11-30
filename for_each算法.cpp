//算法讲解
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int val)
{
	cout<<val<<" ";
}
class myprint
{
public:
	void operator()(int val)
	{
		cout<<val<<" ";
	}
 }; 
void test()
{
	vector<int>v;
	int i=0;
	for(i=0;i<10;i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(),v.end(),print);//普通函数 
	cout<<endl;
	for_each(v.begin(),v.end(),myprint());
	cout<<endl;
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
