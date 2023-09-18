// M - Palindromes _easy version

/*
# include <stdio.h>
# include <string.h>

int main()
{
	int n;
	int len;
	int i, j;
	char str[1110];

	scanf("%d", &n);

	while (n > 0)
	{
		scanf("%s", &str);

		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			if (str[i] != str[len - i - 1])
			{
				printf("no\n");
				break;
			}
		}

		if (i == len)
			printf("yes\n");

		n--;
	}

	return 0;
}
*/