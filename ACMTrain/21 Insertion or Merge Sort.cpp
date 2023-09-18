// 21: Insertion or Merge Sort

/*
	 寻找有序数列的最后一个数的下标，再比较后面，若一样则为插入排序，否则为归并排序

	 参考https://www.liuchuo.net/archives/1902
*/

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 100

int main()
{
	int n;
	int a[MAX], b[MAX];
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		// 获取数据
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
		}

		// 寻找有序数列的最后一个数的下标
		for (i = 0; i < n - 1 && b[i] < b[i + 1]; i++);

		// 比较后面的数据与原始数据是否一样
		for (j = i + 1; j < n && a[j] == b[j]; j++);

		if (j == n)
		{
			printf("Insertion Sort\n");

			sort(a, a + i + 2);	//	既然不需要排完，那就直接sort到这个数
		}
		else
		{
			printf("Merge Sort\n");

			int k = 1, flag = 1;	// 模拟归并
			while (flag)
			{
				flag = 0;

				for (i = 0; i < n; i++)
				{
					if (a[i] != b[i])
						flag = 1;
				}

				k *= 2;
				for (i = 0; i < n / k; i++)
					sort(a + i * k, a + (i + 1) * k);	//排左子序列

				sort(a + n / k * k, a + n);
			}
		}

		// 输出
		for (j = 0; j < n; j++) {
			if (j != 0) printf(" ");
			printf("%d", a[j]);
		}
		printf("\n");
	}

	return 0;
}

*/

