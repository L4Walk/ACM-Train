// 22: Insertion or Heap Sort

/*
	 Ѱ���������е����һ�������±꣬�ٱȽϺ��棬��һ����Ϊ�������򣬷���Ϊ������

	 �ο�https://www.liuchuo.net/archives/1902
*/
/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
using namespace std;

# define MAX 100

int main()
{
	int n;
	int a[MAX], b[MAX];
	int i, j;

	while (scanf("%d", &n) != EOF)
	{
		// ��ȡ����
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
		}

		// Ѱ���������е����һ�������±�
		for (i = 0; i < n - 1 && b[i] < b[i + 1]; i++);

		// �ȽϺ����������ԭʼ�����Ƿ�һ��
		for (j = i + 1; j < n && a[j] == b[j]; j++);

		if (j == n)
		{
			printf("Insertion Sort\n");

			sort(a, a + i + 2);	//	��Ȼ����Ҫ���꣬�Ǿ�ֱ��sort�������
		}
		else
		{
			printf("Heap Sort\n");

			
		}

		// ���
		for (j = 0; j < n; j++) {
			if (j != 0) printf(" ");
			printf("%d", a[j]);
		}
		printf("\n");
	}

	return 0;
}
*/