// P1781 ������ͳ

/*
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	int m;
	char str[110];
	int i,j;
	int pos = 0;
	int len_max = 0, len = 0;
	char max[110] = { 0 };

	scanf("%d", &m);

	scanf("%s", &max);//����һ������max
	len_max = strlen(max);

	for (i = 1; i < m; i++)
	{
		scanf("%s", &str);
		len = strlen(str);

		// �жϴ�С
		if (len_max < len)
		{
			memcpy(max, str, len + 1);
			len_max = len;
			pos = i;
		}
		else if (len_max == len)
		{
			if (strcmp(max, str) < 0)
			{
				memcpy(max, str, len + 1);
				len_max = len;
				pos = i;
			}
		}

	}

	printf("%d\n%s", pos + 1, max);

	return 0;
}
*/
