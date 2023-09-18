// 3: ½»»»Æ»¹û

/*
# include <stdio.h>
# include <stdlib.h>

void AppleNum(int a[],int len);

void IdeaNum(int a[],int len);

int main()
{
	int N, n;
	int *apple;
	int* idea;
	int i;

	scanf("%d", &N);

	while (N > 0)
	{
		scanf("%d", &n);

		apple = (int*)malloc(sizeof(int) * n);
		idea = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &apple[i], &idea[i]);
		}

		AppleNum(apple,n);
		IdeaNum(idea, n);

		for (i = 0; i < n; i++)
		{
			printf("%d %d\n", apple[i], idea[i]);
		}

		
		free(apple);
		free(idea);

		N--;
	}

	return 0;
}

void AppleNum(int a[], int len)
{
	int i, j;
	int t;

	t = a[len - 1];

	for (i = len - 1; i > 0; i--)
	{
		a[i] = a[i - 1];
	}

	a[0] = t;
}

void IdeaNum(int a[], int len)
{
	int i;
	int sum = 0;

	for (i = 0; i < len; i++)
	{
		sum += a[i];
	}

	for (i = 0; i < len; i++)
	{
		a[i] = sum;
	}
}
*/