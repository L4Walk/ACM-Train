// 4: �����DNA

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

			// �ϰ벿��
			for (i = 0; i < a / 2; i++)
			{
				// ǰ��Ŀո�
				if (line != a)
				{
					for (j = 1; j < a- line; j++)
						printf(" ");
				}


				// ��ѭ��
				printf("x");

				for (j = 0; j < line - 2; j++)
				{
					printf(" ");
				}

				printf("x");

				// ����Ŀո�
				if (line != a)
				{
					for (j = 1; j < a - line; j++)
						printf(" ");
				}

				line -= 2;
				printf("\n");
			}

			// �м䲿��
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

			// �°벿�֣�
			line = 3;

			while (line <= a)
			{
				for (i = 0; i < a / 2; i++)
				{
					// ǰ��Ŀո�
					if (line != a)
					{
						for (j = 1; j < a - line; j++)
							printf(" ");
					}


					// ��ѭ��
					printf("x");

					for (j = 0; j < line - 2; j++)
					{
						printf(" ");
					}

					printf("x");

					// ����Ŀո�
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
