// P1177 ��ģ�塿��������

# include<stdio.h>
# include <stdlib.h>

/*
 // �ֿ�д
int sort_array(int a[], int l, int r)
{
	int i = l, j = r;
	int x = a[0];

	while (i < j) 
	{
		while (a[j] >= x && i < j) // ���������ҵ�һ����xС������
			j--;

		if (i < j)
		{
			a[i] = a[j];
			i++;
		}

		while (a[i] < x && i < j)  // ���������ҵ�һ����x�������
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
	int temp; // ���������ʱ�ı���
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

// �ϳ�
void quick_sort(int a[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, x = a[l];

		// ����<10�ò�������
		if (r - l + 1 < 10)
		{
			InsertSort(a, l, r);
			
			return;
		}

		while (i < j)
		{
			while (i < j && a[j] >= x) // ���������ҵ�һ��С��x����
				j--;

			if (i < j)
				a[i++] = a[j];

			while (i < j && a[i] < x) // ���������ҵ�һ�����ڵ���x����
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