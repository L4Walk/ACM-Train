// 3321: 回文串

/*
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	int cnt = 0;
	int i, j;
	int len;
	char str[500], str1[500], str2[500];

	while (scanf("%s", &str) != EOF)
	{
		len = strlen(str);
		j = 0;

		// 储存原句
		for (i = 0; i < len; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			{
				str1[j] = tolower(str[i]);
				j++;
			}
		}

		len = strlen(str1);
		// 回文比较
		for (i = 0, j = len - 1; str[i] = str[j]; i++, j--);

		if(i!=j)

		
	}

	return 0;
}
*/