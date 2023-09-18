// 39: Merge Sort

/*
# include <stdio.h>
//# include <iostream>
//# include <algorithm>
//using namespace std;

# define MAX 100000

void Merge(long a[], int left, int mid, int right);
void MergeSortRecursion(long a[], int left, int right);


int main()
{
	int n;
	int i, j;
	long a[MAX];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%ld", &a[i]);
	
	MergeSortRecursion(a, 0, n - 1 );

	return 0;
}


void Merge(long a[], int left, int mid, int right)
{
	int len = right - left + 1;
	long* temp = new long[len];
	int index = 0;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right)
		temp[index++] = a[i] <= a[j] ? a[i++] : a[j++];

	while (i <= mid)
		temp[index++] = a[i++];

	while (j <= right)
		temp[index++] = a[j++];

	for (int k = 0; k < len; k++)
		a[left++] = temp[k];

	printf("%ld\n",a[mid]);
}


void MergeSortRecursion(long a[], int left, int right)
{
	if (left == right)
	{
		printf("%ld\n", a[left]);
		return;
	}

	int mid = (left + right) / 2;
	MergeSortRecursion(a, left, mid);
	MergeSortRecursion(a, mid + 1, right);
	Merge(a, left, mid, right);

	
}
*/