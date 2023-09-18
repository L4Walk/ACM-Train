// P2550 [AHOI2001]²ÊÆ±Ò¡½±

/*
# include <stdio.h>

int main()
{
	int n;
	int a[34] = { 0 }, prize[7] = { 0 }, temp;
	int count;
	int i, j;
	
	scanf("%d", &n);

	for (i = 0; i <= 6; i++)
	{
		scanf("%d", &temp);
		a[temp]++;
	}

	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= 7; j++)
		{
			scanf("%d", &temp);

			if (a[temp] == 1)
				count++;
		}

		prize[7 - count] ++;
	}

	for (i = 0; i <= 6; i++)
	{
		printf("%d ", prize[i]);
	}

	return 0;
}




#include <stdio.h>

int main()
{
	int n;
	int prizeNumber[7];
	int bougthNumber;
	int count, temp;
	int specialPrize, prize1, prize2, prize3, prize4, prize5, prize6;
	int i, j, z;

	scanf("%d", &n);

	for (i = 1; i <= 7; i++)
		scanf("%d", &prizeNumber[i - 1]);

	count = specialPrize = prize1 = prize2 = prize3 = prize4 = prize5 = prize6 = 0;

	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= 7; j++)
		{
			scanf("%d", &temp);

			for (z = 0; z <= 6; z++)
			{
				if (temp == prizeNumber[z])
					count++;
			}
		}

		switch (count)
		{
		case 1:
			prize6++;
			break;
		case 2:
			prize5++;
			break;
		case 3:
			prize4++;
			break;
		case 4:
			prize3;
			break;
		case 5:
			prize2++;
			break;
		case 6:
			prize1++;
			break;
		default:
			specialPrize++;
			break;
		}
	}

	printf("%d %d %d %d %d %d %d", specialPrize, prize1, prize2, prize3, prize4, prize5, prize6);

	return 0;
}
*/