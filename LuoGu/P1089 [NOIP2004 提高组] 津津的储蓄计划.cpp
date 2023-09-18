// P1089 [NOIP2004 提高组] 津津的储蓄计划

/*
# include <stdio.h>

int main()
{
	int monthBuget[12];
	int totalSave;
	int money;
	int lastRemain;
	int i,  j;

	for (i = 0; i <= 11; i++)
	{
		scanf("%d", &monthBuget[i]);
	}
	
	lastRemain = totalSave = 0.0;
	for (i = 0; i <= 11; i++)
	{
		money = 300 + lastRemain;

		if ((money - monthBuget[i]) / 100 > 0)
		{
			totalSave += (money - monthBuget[i]) / 100 * 100;
			money -= (money - monthBuget[i]) / 100 * 100;
		}

		lastRemain = money - monthBuget[i];

		if (lastRemain < 0)
		{
			printf("-%d", i+1);
			return 0;
		}
	}

		printf("%.lf", totalSave * 1.2 + lastRemain);
	return 0;
}
*/