// H - C语言合法标识符

/*
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# define MAXLEN 55

int main()
{
	int n;
	int i;
	char str[MAXLEN];

	scanf("%d", &n);
	getchar();

	while (n > 0)
	{
		gets_s(str, MAXLEN);

		if (isalpha(str[0]) == 0 && str[0] != '_')
			printf("no\n");
		else
		{
			for (i = 1; i < strlen(str); i++)
			{
				if(isalnum(str[i]) == 0 && str[i] != '_')
				{
					printf("no\n");
					break;
				 }
			}
			
			if (i == strlen(str))
				printf("yes\n");
		}
		

		n--;
	}

	return 0;
}
*/