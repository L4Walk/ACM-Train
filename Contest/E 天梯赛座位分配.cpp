// E ��������λ����

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;   // ���ѧУ�� 
	int* a; // ���ÿ��ѧУ�Ķ�����
	int** seat; // �����λ
	int teamNumber = 0; // ��Ŷ�������
	int playerNumber = 0; // ���ѡ������
	int x = 0, y = 0; // ����
	int cnt = 0; // ��λ���
	int schoolNumber = 0; // ѧУ���
	int i, j;
	int num = 0;

	// ��ȡѧУ��
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	// ��ö�������ѡ������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		teamNumber+=a[i];
	}
	playerNumber = teamNumber * 10;

	// ����seat��ά����
	seat = (int**)malloc(sizeof(int*) * teamNumber);
	for (i = 0; i < teamNumber; i++)
	{
		seat[i] = (int*)malloc(sizeof(int) * 10);
	}

	// ���
	while (playerNumber > 0)
	{
		// ��ű��
		seat[x][y] = cnt;
		cnt++;

		// ������仯
		x += a[schoolNumber];
		schoolNumber++;
		
		if (x > teamNumber)
		{
			x -= teamNumber;
			y++;
		}

		if (schoolNumber > n)
		{
			schoolNumber = 0;
			y++; 		// ������仯

			// ����һ������
			if (y == 10)
			{
				x++;
				y = 0;

				// ÿһ��ѧУ�Ĵ���Ӽ�һ
				for (i = 0; i < n; i++)
					a[i]--;
			}
		}

		playerNumber--;
	}

	// ���
	for (i = 0; i < teamNumber;i++)
	{
		printf("%d", seat[i][0]);

		for (j = 1; j < 10; j++)
		{
			printf(" %d", seat[i][j]);
		}
		printf("\n");
	}

	// �ͷ��ڴ�
	for (i = 0; i < teamNumber; i++)
	{
		free(seat[i]);
	}
	free(seat);
	free(a);

	return 0;
}
*/
