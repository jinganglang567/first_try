//利用new操作符将数据开辟到内存的堆区，必须人为释放，用delete释放
#include <iostream>
#include <stdlib.h>
using namespace std;
//程序按顺序执行
int * func()
{
	//new 类似一个函数，会返回一个相对应数据类型的指针，需要接收
	int * p=new int(10);//在堆区开辟了一个数据10
	return p;//将该指针返回
}
void test()
{
	int * p=func();
	cout<<*p<<endl;//内存不被释放，p存的数据永远不变
	delete p;//直接释放，再使用输出语句就会报错
}
void test1()
{
	//开辟一个数组在堆区
	int * arr=new int[10];//10代表有10个元素
	//然后可以直接利用new的返回值进行操作
	for(int i=0;i<10;i++)
	{
		arr[i]=i+100;
		
	}
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	//释放数组
	delete [] arr;
}
int main()
{
	test();
	test1();
	system("pause");
	return 0;
}
