// P1047 [NOIP2005 �ռ���] У�������

/*
# include <stdio.h>
# include <stdlib.h>
# include <memory.h>

int main()
{
	int l, m, u, v;
	int i, j;
	int count = 0;
	// ���嶯̬����
	int* tree;
	
	scanf("%d%d", &l, &m);

	// ��̬���鸳ֵ
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