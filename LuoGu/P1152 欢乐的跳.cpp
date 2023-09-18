// P1152 欢乐的跳

/* 解题思路 */
/*
	考虑到set自带排序，所以可以创建差值的set，最后比较两个set的头尾数值即可
*/

/*
# include <stdio.h>
# include <math.h>
# include <iostream>
# include <set>
# include <vector>
using namespace std;

int main()
{
	int n;
	long x;	// 差值
	int i;
	long a[1001];
	set<long>index;	// 存放插值

	//freopen("P1152_2.in", "r", stdin);
	while (scanf("%d", &n) != EOF)	// 获取n
	{
		index.clear();

		scanf("%ld", &a[0]);	// 获取a[0]

		for (i = 1; i < n; i++)
		{
			// 获取数组并存入
			scanf("%ld", &a[i]);

			// 获取插值并存入
			x = abs(a[i] - a[i - 1]);
			index.insert(x);
		}

		if (*index.begin() < 1 || *index.rbegin() >(n - 1))
			printf("Not jolly\n");
		else
			printf("Jolly\n");
	}
	


	return 0;
}
*/