// P2669 [NOIP2015 ÆÕ¼°×é] ½ð±Ò

/*
# include <stdio.h>

int main()
{
	int n, k;
	int dayTotal, money;
	
	scanf("%d", &k);

	money = dayTotal = 0;
	n = 0;

	while (dayTotal <= k)
	{
		n++;

		dayTotal += n;

		money += n * n;
	}

	if (dayTotal > k)
		money -= n * (dayTotal - k);

	printf("%d", money);
	
	return 0;
}
*/