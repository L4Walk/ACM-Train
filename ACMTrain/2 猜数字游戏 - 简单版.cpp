// 2: ��������Ϸ - �򵥰�

/*
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	int n;
	int num[1000] = { 0 };
	int guess[1000] = { 0 };
	int f_num[1000] = { 0 };	//	�ж�ԭ����ÿ��λ���Ƿ��жϹ�
	int f_guess[1000] = { 0 };	//	�жϲ²�����ÿ��λ���Ƿ��жϹ�
	int ff = 1;	//	ff����ÿ�������Ƿ����
	int i, j;
	int a, b;
	int cnt = 1;	//	��¼game����
	int sum = 0;	//	��ȡÿ�����ݵ�ֵ����Ϊ0��ffΪ0 


	while (scanf("%d", &n) != EOF && n != 0)
	{
		printf("Game %d:\n", cnt);
		cnt++;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &num[i]);
		}

		while (ff != 0)
		{
			sum = 0;
			a = b = 0;
			memset(f_num, 0, sizeof(f_num));
			memset(f_guess, 0, sizeof(f_guess));
			memset(guess, 0, sizeof(guess));
			//	����ʱ�ж��Ƿ�����ͬλ�ã�����ǡ�
			for (i = 0; i < n; i++)
			{
				scanf("%d", &guess[i]);
				sum += guess[i];

				if (guess[i] == num[i])
				{
					a++;
					f_num[i] = 1;
					f_guess[i] = 1;
				}
			}

			//	Ѱ��b
			if (sum == 0)
			{
				ff = 0;
			}
			else
			{
				for(i = 0; i < n;i++)
				{
					if (f_guess[i] == 0)
					{
						for (j = 0; j < n; j++)
						{
							if (f_num[j] == 0 && num[j] == guess[i])
							{
								b++;
								f_num[j] = 1;
								f_guess[i] = 1;
								break;
							}
						}
					}
				}

				printf("    (%d,%d)\n", a, b);
			}
			
		}

		ff = 1;
	}

	return 0;
}
*/

