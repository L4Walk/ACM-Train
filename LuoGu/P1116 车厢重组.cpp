// P1116 ³µÏáÖØ×é

/*
# include <stdio.h>

void Swap(int A[], int l, int r);
int BullSort_Count(int A[], int len);

int main()
{
	int n;
	int a[10001];
	int i, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int cnt = BullSort_Count(a, n);
	printf("%d", cnt);

	return 0;
}

void Swap(int A[], int l, int r)
{
	int temp = A[l];
	A[l] = A[r];
	A[r] = temp;
}

int BullSort_Count(int A[], int len)
{
	int cnt = 0;

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				Swap(A, j, j + 1);
				cnt++;
			}
		}
	}

	return cnt;
}
*/
