// P5728 【深基5.例5】旗鼓相当的对手

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n;
	int i, j;
	int opponent;
	int* Chinese;
	int* Math;
	int* English;
	int* Total;

	scanf("%d", &n);

	Chinese = (int*)calloc(n + 1, sizeof(Chinese));
	Math = (int*)calloc(n + 1, sizeof(Math));
	English = (int*)calloc(n + 1, sizeof(English));
	Total = (int*)calloc(n + 1, sizeof(Total));
	opponent = 0;


	for (i = 1; i <= n; i++)
	{
		scanf("%d%d%d", &Chinese[i], &Math[i], &English[i]);
		Total[i] = Chinese[i] + Math[i] + English[i];

	}
		
	for (i = 1; i <= n; i++)
	{
		for (j = i + 1; j <= n ; j++)
		{
			if ((abs(Chinese[i] - Chinese[j]) <= 5) && (abs(Math[i] - Math[j]) <= 5) && (abs(English[i] - English[j]) <= 5) && (abs(Total[i] - Total[j]) <= 10))
				opponent++;
		}
	}

	printf("%d", opponent);
	return 0;
}
*/