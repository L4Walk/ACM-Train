// P1909 [NOIP2016 �ռ���] ��Ǧ��

/*

# include <stdio.h>

int main()
{
	int n;
	int prize[3], num[3];
	int i, j;
	unsigned long long cost = 0, costMin = 0;

	// ��ȡ���� & ���ݳ�ʼ��
	scanf("%d", &n);

	for (i = 0; i <= 2; i++)
	{
		scanf("%d%d", &num[i], &prize[i]);
	}

	// ��˳�����
	for (i = 0; i <= 2; i++)
	{
		j = 1;
		while (num[i] * j < n)
		{
			j++;
		}

		cost = j * prize[i];

		if (i == 0)
			costMin = cost;
		else if (cost < costMin)
			costMin = cost;

	}

	printf("%lld", costMin);
	
	return 0;
}
*/