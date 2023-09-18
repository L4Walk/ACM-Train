// 25: N皇后问题

/*
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 11
int q[N];	// 各皇后所在的行号
int cnt = 0;	// 统计解得的个数

int find(int i, int k);	// 检验第i行的k列上是否可以摆放皇后
void place(int k, int n);	// 放置皇后到棋盘上

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		memset(q, 0, N);
		cnt = 0;
		place(1, n);
		printf("%d\n", cnt);
	}
	
	return 0;
}

int find(int i, int k)
{
	int j = 1;
	while (j < i)	//j=1~i-1是已经放置了皇后的行
	{
		//第j行的皇后是否在k列或(j,q[j])与(i,k)是否在斜线上
		if (q[j] == k || abs(j - i) == abs(q[j] - k))
			return 0;

		j++;
	}

	return 1;
}

void place(int k, int n)
{
	int j;

	if (k > n)
		cnt++;
	else
	{
		for (j = 1; j <= n; j++)	//试探第k行的每一个列
		{
			if (find(k, j))
			{
				q[k] = j;
				place(k + 1, n);	 //递归总是在成功完成了上次的任务的时候才做下一个任务
			}
		}
	}
}
*/