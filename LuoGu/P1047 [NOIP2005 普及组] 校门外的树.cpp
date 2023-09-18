// P1047 [NOIP2005 普及组] 校门外的树

/*
# include <stdio.h>
# include <stdlib.h>
# include <memory.h>

int main()
{
	int l, m, u, v;
	int i, j;
	int count = 0;
	// 定义动态数组
	int* tree;
	
	scanf("%d%d", &l, &m);

	// 动态数组赋值
	tree = (int*)calloc(l + 1, sizeof(int));

	for (i = 1; i <= m ; i++ )
	{
		scanf("%d%d", &u, &v);

		for (j = u; j <= v; j++)
		{
			tree[j] = 1;
		}
	}

	for (i = 0; i <= l; i++)
	{
		if (tree[i] ==0)
			count++;
	}

	printf("%d", count);

	return 0;
}
*/