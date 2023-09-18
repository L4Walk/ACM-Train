// P1085 [NOIP2004 普及组] 不高兴的津津


/*
# include <stdio.h>

int main()
{
	int time[7];
	int school, afterschool;
	int i;
	int max, max_i;

	max = 0;
	max_i = 0;

	for (i = 1; i <= 7; i++)
	{
		scanf_s("%d%d", &school, &afterschool);

		time[i] = school + afterschool;

		if ((time[i] > max) && (time[i] > 8))
		{
			max = time[i];
			max_i = i;
		}

	}
	
	printf("%d", max_i);

	return 0;

}
*/