// 4: 神奇的DNA

/*
# include <stdio.h>

int main()
{
	int n;
	int a, b;
	int i;
	int j;
	int line;

	scanf("%d", &n);

	while (n > 0)
	{
		scanf("%d%d", &a, &b);
		
		while (b > 0)
		{
			line = a;

			// 上半部分
			for (i = 0; i < a / 2; i++)
			{
				// 前面的空格
				if (line != a)
				{
					for (j = 1; j < a- line; j++)
						printf(" ");
				}


				// 内循环
				printf("x");

				for (j = 0; j < line - 2; j++)
				{
					printf(" ");
				}

				printf("x");

				// 后面的空格
				if (line != a)
				{
					for (j = 1; j < a - line; j++)
						printf(" ");
				}

				line -= 2;
				printf("\n");
			}

			// 中间部分
			for (j = 0; j < a / 2; j++)
			{
				printf(" ");
			}

			printf("x");

			for (j = 0; j < a / 2; j++)
			{
				printf(" ");
			}

			printf("\n");

			// 下半部分；
			line = 3;

			while (line <= a)
			{
				for (i = 0; i < a / 2; i++)
				{
					// 前面的空格
					if (line != a)
					{
						for (j = 1; j < a - line; j++)
							printf(" ");
					}


					// 内循环
					printf("x");

					for (j = 0; j < line - 2; j++)
					{
						printf(" ");
					}

					printf("x");

					// 后面的空格
					if (line != a)
					{
						for (j = 1; j < a - line; j++)
							printf(" ");
					}

					line += 2;
					printf("\n");
				}
			}
			b--;
		}
		
		n--;
	}


	return 0;
}
*/
