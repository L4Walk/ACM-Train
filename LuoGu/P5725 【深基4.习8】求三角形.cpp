// P5725 �����4.ϰ8����������

/*
# include <stdio.h>

int main()
{
	int n;
	int i, j,t = 1;

	scanf("%d", &n);

	// ������
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%02d", t);
			t++;
		}
		printf("\n");
	}

	// ����
	printf("\n");

	// ������
	t = 1;
	int x = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - x; j++)
		{
			printf("  ");
		}
		for (j = n - x + 1; j <= n; j++)
		{
			printf("%02d", t);
			t++;
		}
		printf("\n");
		x++;
	}

	return 0;
}
*/