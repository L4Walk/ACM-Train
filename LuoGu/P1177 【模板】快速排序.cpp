// P1177 【模板】快速排序

# include<stdio.h>
# include <stdlib.h>

/*
 // 分开写
int sort_array(int a[], int l, int r)
{
	int i = l, j = r;
	int x = a[0];

	while (i < j) 
	{
		while (a[j] >= x && i < j) // 从右向左找第一个比x小的数；
			j--;

		if (i < j)
		{
			a[i] = a[j];
			i++;
		}

		while (a[i] < x && i < j)  // 从左向右找第一个比x大的数；
			i++;

		if (i < j)
		{
			a[j] = a[i];
			j--;
		}
	}

	a[i] = x;

	return i;
}

void quick_sort(int a[], int l, int r)
{
	if (l < r)
	{
		int i = sort_array(a, l, r);

		quick_sort(a, l, i - 1);
		quick_sort(a, i + 1, r);

	}
}
*/


/*
void InsertSort(int arr[], int m, int n)
{
	int i, j;
	int temp; // 用来存放临时的变量
	for (i = m + 1; i <= n; i++)
	{
		temp = arr[i];
		for (j = i - 1; (j >= m) && (arr[j] > temp); j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
}

// 合成
void quick_sort(int a[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, x = a[l];

		// 长度<10用插入排序
		if (r - l + 1 < 10)
		{
			InsertSort(a, l, r);
			
			return;
		}

		while (i < j)
		{
			while (i < j && a[j] >= x) // 从右向左找第一个小于x的数
				j--;

			if (i < j)
				a[i++] = a[j];

			while (i < j && a[i] < x) // 从左向右找第一个大于等于x的数
				i++;

			if (i < j)
				a[j--] = a[i];
		}

		a[i] = x;

		quick_sort(a, l, i - 1);
		quick_sort(a, i + 1, r);

	}
}

int main()
{
	int n;
	int* a;
	int temp;
	int i;

	scanf("%d", &n);

	a = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);

		a[i] = temp;
	}

	quick_sort(a, 0, n - 1);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
*/