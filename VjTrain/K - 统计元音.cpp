// K - Í³¼ÆÔªÒô

/*
# include <stdio.h>
# include <string.h>
# define MAXLEN 100

int main()
{
	int n;
	int cnt_a = 0, cnt_e = 0, cnt_i = 0, cnt_o = 0, cnt_u = 0;
	char str[110];
	int i;

	scanf("%d", &n);

	getchar();

	while (n > 0)
	{
		gets_s(str, MAXLEN);


		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] == 'a')
				cnt_a++;
			else if (str[i] == 'e')
				cnt_e++;
			else if (str[i] == 'i')
				cnt_i++;
			else if (str[i] == 'o')
				cnt_o++;
			else if (str[i] == 'u')
				cnt_u++;
		}

		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d", cnt_a, cnt_e, cnt_i, cnt_o, cnt_u);

		if (n != 1)
			printf("\n\n");
		else 
			printf("\n");

		cnt_a = cnt_e = cnt_i = cnt_o = cnt_u = 0;

		n--;

	}

	return 0;
}
*/