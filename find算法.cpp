//find�㷨
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//�Զ����������͵Ĳ���
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
	//����==
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
	person p1("�����",200);
	person p2("�ѽ�",200);
	person p3("������",55);
	person p4("����",200);
	vector<person>p;
	person p5("����",200);
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	vector<person>::iterator it=find(p.begin(),p.end(),p5);
	if(it==p.end())
	{
		cout<<"û�ҵ�"<<endl;
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
		cout<<"������"<<5<<"���Ԫ��"<<endl; 
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
