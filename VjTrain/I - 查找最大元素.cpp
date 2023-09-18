// I - 查找最大元素

/*
# include <stdio.h>
# include <string.h>

int main()
{
	char str[110];
	char max;
	int i;

	while (scanf("%s", &str) != EOF)
	{
		max = str[0];

		for (i = 1; i < strlen(str); i++)
		{
			if (str[i] > max)
				max = str[i];
		}

		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] == max)
				printf("%c(max)", str[i]);
			else
				printf("%c", str[i]);
		}

		printf("\n");
	}

	return 0;
}
*/