//const与指针的关系,有一种异常情况，黑马程序员第117集
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
