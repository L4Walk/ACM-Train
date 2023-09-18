// J - Ê××ÖÄ¸±ä´óÐ´

/*
# include <stdio.h>
# include <string.h>
# define MAXLEN 110

int main()
{
	char str[110];
	int f = 1;
	int i;

	while (gets_s(str, MAXLEN) )
	{
		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' && f == 1)
			{
				str[i] -= 32;
				f = 0;
			}
			else if (str[i] == 32)
				f = 1;
		}

		printf("%s\n", str);

		f = 1;

	}

	return 0;
}
*/
