// P1200 [USACO1.1]ÄãµÄ·ÉµúÔÚÕâ¶ùYour Ride Is Here

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	char star[7], team[7];
	int len1, len2;
	int sum1 = 1, sum2 = 1;
	int i = 0;

	scanf("%s", &star);
	scanf("%s", &team);

	len1 = sizeof(star) / sizeof(star[0]);
	len2 = sizeof(team) / sizeof(team[0]);

	while (i < len1 && star[i] != '\0')
	{
		sum1 *= star[i] - 'A' + 1;
		i++;
	}

	i = 0;
	while (i < len2 && team[i] != '\0')
	{
		sum2 *= team[i] - 'A' + 1;
		i++;
	}

	if (sum1 % 47 == sum2 % 47)
		printf("GO");
	else
		printf("STAY");

	return 0;
}
*/