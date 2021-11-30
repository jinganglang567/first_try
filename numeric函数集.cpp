//常用算术生成
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
void test()
{
	vector<int>v;
	int i=0;
	for(i=0;i<11;i++)
	{
		v.push_back(i);
	}
	int sum=accumulate(v.begin(),v.end(),0);
	cout<<sum<<endl;
	vector<int>v2;
	v2.resize(10);
	fill(v2.begin(),v2.end(),100);
	for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
	{
		cout<<*it<<endl;
	}
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
