// A - Բ������

/*���˼·*/
/*ͨ��ģ��ɾ�����̽������*/

/*
# include <stdio.h>
# include <iostream>
# include <vector>
using namespace std;

int main()
{
	int n, m;	// n�������||���˵�������������Ϊ2n��m��ʾ������
	int i, j;
	int pos;

	while (scanf("%d%d", &n, &m) != EOF)
	{
		// ��ʼ��seat
		vector<int>seat;
		seat.clear();

		for (i = 0; i < 2 * n; i++)
		{
			seat.push_back(i);
		}

		// ģ��ɱ��;
		pos = 0;

		for (i = 0; i < n; i++)
		{
			pos = (pos + m - 1) % seat.size();	// ��ȡ��һ��λ��
			seat.erase(seat.begin() + pos);	// ɾ��
		}

		// ���
		j = 0;
		for (i = 0; i < 2 * n; i++)
		{
			if (i % 50 == 0 && i != 0)
				printf("\n");

			if (j < seat.size() && i == seat[j])
			{
				printf("G");
				j++;
			}
			else
				printf("B");
		}
		printf("\n\n");
	}


	return 0;
}
*/