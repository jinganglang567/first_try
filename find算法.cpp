//find算法
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//自定义数据类型的查找
class person
{
public:
	person(string pname,int page)
	{
		this->age=page;
		this->name=pname;
	}
	string name;
	int age;
	//重载==
	bool operator==(const person&p)
	{
		if(this->age==p.age&&this->name==p.name)
		{
			return true;
		}
		else
		{
			return false;
		} 
	 } 
};
void test2()
{
	person p1("金刚狼",200);
	person p2("寡姐",200);
	person p3("钢铁侠",55);
	person p4("美队",200);
	vector<person>p;
	person p5("美队",200);
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	vector<person>::iterator it=find(p.begin(),p.end(),p5);
	if(it==p.end())
	{
		cout<<"没找到"<<endl;
	 } 
	else
	{
		cout<<it->name<<" "<<it->age<<endl;
	}
}
void test()
{
	vector<int>v;
	int i=0;
	for(i=0;i<10;i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it=find(v.begin(),v.end(),5);
	if(it==v.end())
	{
		cout<<"不含有"<<5<<"这个元素"<<endl; 
	}
	else
	{
		cout<<*it<<endl;
	}
}
int main()
{
	test();
	test2();
	cin.get();
	return 0;
 } 
