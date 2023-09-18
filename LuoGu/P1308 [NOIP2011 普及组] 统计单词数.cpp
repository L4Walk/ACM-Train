// P1308 [NOIP2011 普及组] 统计单词数

/*
# include <stdio.h>
# include <string.h>
#include <ctype.h>

int main()
{
	char aim[11], text[11];
	int place = 0, firstPlace = -1, sum = 0;
	int i,j;

	scanf("%s", &aim);

	for (i = 0; aim[i]; i++)
	{
		if (isupper(aim[i]))
			aim[i] = tolower(aim[i]);
	}

	while (scanf("%s", &text) != EOF)
	{
		for (i = 0; text[i]; i++)
		{
			if (isupper(text[i]))
				text[i] = tolower(text[i]);
		}

		if (strcmp(aim, text) == 0)
		{
			if (firstPlace == -1)
				firstPlace = place;

			sum++;
		}

		place++;
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d %d", sum, firstPlace);

	return 0;
}
*/