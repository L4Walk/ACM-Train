// 19: 简单的插入排序
/*
# include <stdio.h>
# include <stdlib.h>
# define Num 10

int main()
{
	int a[Num];
	int temp;
	int cnt = 0;
	int i = 0, j = 0;
	int pos = 0;

	while (scanf("%d", &temp) != EOF)
	{
		if (cnt == 0)
			a[0] = temp;

		cnt++;

		if (i != 0)
			j = i - 1;

		// 插入排序
		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = temp;

		// 输出
		for (i = 0; i < cnt; i++)
		{
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		}

		printf("\n");

		// 重置
		if (cnt == 10)
		{
			for (i = 0; i < Num; i++)
				a[i] = 0;

			cnt = 0;
		}

	}

	return 0;
}
*/