//pair�����ʹ��,��������ͷ�ļ� 
#include<iostream>
#include<string>
using namespace std;
void test()
{
	pair<string,int>p("�����",200);
	pair<string,int>c=make_pair("�ƿ�",300);
	cout<<c.first<<endl<<c.second<<endl; 
}
int main()
{
	test();
	cin.get();
	return 0;
 } 
