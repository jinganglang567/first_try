//const��ָ��Ĺ�ϵ,��һ���쳣������������Ա��117��
#include<iostream>
using namespace std;
class person
{
public:
	mutable int name;
	int age;
	void fun()const
	{
		this->name=10;
		cout<<this->name<<endl;
	 } 
};
int main()
{
	person p;
	p.fun();
	cin.get();
	return 0;
 } 
