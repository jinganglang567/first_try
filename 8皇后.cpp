//下标从第一行到第八行
//下标从第一列到第八列 
#include <iostream>
#include <stdlib.h>
using namespace std;
const int N=10;
int a[N];//表示皇后位于第i行第a[i]列 
int cnt,n; 
bool check(int x,int y)//检测第x行，第y列
{
	for(int i=1;i<x;i++)
	{
		if(a[i]==y)
			return false;
		if(i+a[i]==x+y)
			return false;
		if(i-a[i]==x-y)
			return false;
		//利用对角线上满足横纵坐标是常数 
	}
	return true;
 } 
void dfs(int row)
{
	if(row==n+1)
	{
		//遍历结束
		//解法+1
		cnt++;
		return; 
	}
	//没有到边界时，第row行的一列一列遍历 
	for(int i=1;i<=n;i++)
	{
		if(check(row,i))
		{
			a[row]=i;//第row行确定
			//开始下一行
			dfs(row+1);
			//一组解结束之后需要初始化 
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
