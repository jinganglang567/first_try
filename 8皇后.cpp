//�±�ӵ�һ�е��ڰ���
//�±�ӵ�һ�е��ڰ��� 
#include <iostream>
#include <stdlib.h>
using namespace std;
const int N=10;
int a[N];//��ʾ�ʺ�λ�ڵ�i�е�a[i]�� 
int cnt,n; 
bool check(int x,int y)//����x�У���y��
{
	for(int i=1;i<x;i++)
	{
		if(a[i]==y)
			return false;
		if(i+a[i]==x+y)
			return false;
		if(i-a[i]==x-y)
			return false;
		//���öԽ�����������������ǳ��� 
	}
	return true;
 } 
void dfs(int row)
{
	if(row==n+1)
	{
		//��������
		//�ⷨ+1
		cnt++;
		return; 
	}
	//û�е��߽�ʱ����row�е�һ��һ�б��� 
	for(int i=1;i<=n;i++)
	{
		if(check(row,i))
		{
			a[row]=i;//��row��ȷ��
			//��ʼ��һ��
			dfs(row+1);
			//һ������֮����Ҫ��ʼ�� 
			a[row]=0;
		} 
	}
 } 
int main()
{
	
	cin>>n;
	dfs(1);
	cout<<cnt<<endl;
	system("pause");
	return 0;
 } 
