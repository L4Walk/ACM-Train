// 6: Peak

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int N;
	int n;
	int* a;
	int i;
	int f = 1;
	int f2 = 0;
	int f3 = 0;

	scanf("%d",& N);

	while (N > 0)
	{
		scanf("%d", &n);

		a = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		if (a[0] > a[1]) 
		{
			f3 = 0;
			
			goto next;
		}


		for (i = 1; i < n; i++)
		{
			if (f2 == 0)
			{
				if (a[i] < a[i - 1])
				{
					f2 = 1;
					f3 = 1;
				}
			}
			else
			{
				if (a[i] > a[i - 1])
				{
					f = 0;
					break;
				}
			}
		}

		next:
		if (f == 1 && f3 ==1)
			printf("Yes\n");
		else
			printf("No\n");

		f = 1;
		f2 = 0;
		f3 = 0;

		free(a);

		N--;
	}

	return 0;
}
*/