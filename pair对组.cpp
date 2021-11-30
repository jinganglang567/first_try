//pair对组的使用,不用引用头文件 
#include<iostream>
#include<string>
using namespace std;
void test()
{
	pair<string,int>p("金刚狼",200);
	pair<string,int>c=make_pair("浩克",300);
	cout<<c.first<<endl<<c.second<<endl; 
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
