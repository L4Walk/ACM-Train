// P1152 ���ֵ���

/* ����˼· */
/*
	���ǵ�set�Դ��������Կ��Դ�����ֵ��set�����Ƚ�����set��ͷβ��ֵ����
*/

/*
# include <stdio.h>
# include <math.h>
# include <iostream>
# include <set>
# include <vector>
using namespace std;

int main()
{
	int n;
	long x;	// ��ֵ
	int i;
	long a[1001];
	set<long>index;	// ��Ų�ֵ

	//freopen("P1152_2.in", "r", stdin);
	while (scanf("%d", &n) != EOF)	// ��ȡn
	{
		index.clear();

		scanf("%ld", &a[0]);	// ��ȡa[0]

		for (i = 1; i < n; i++)
		{
			// ��ȡ���鲢����
			scanf("%ld", &a[i]);

			// ��ȡ��ֵ������
			x = abs(a[i] - a[i - 1]);
			index.insert(x);
		}

		if (*index.begin() < 1 || *index.rbegin() >(n - 1))
			printf("Not jolly\n");
		else
			printf("Jolly\n");
	}
	


	return 0;
}
*/