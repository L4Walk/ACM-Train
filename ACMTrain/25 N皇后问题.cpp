// 25: N�ʺ�����

/*
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

# define N 11
int q[N];	// ���ʺ����ڵ��к�
int cnt = 0;	// ͳ�ƽ�õĸ���

int find(int i, int k);	// �����i�е�k�����Ƿ���԰ڷŻʺ�
void place(int k, int n);	// ���ûʺ�������

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		memset(q, 0, N);
		cnt = 0;
		place(1, n);
		printf("%d\n", cnt);
	}
	
	return 0;
}

int find(int i, int k)
{
	int j = 1;
	while (j < i)	//j=1~i-1���Ѿ������˻ʺ����
	{
		//��j�еĻʺ��Ƿ���k�л�(j,q[j])��(i,k)�Ƿ���б����
		if (q[j] == k || abs(j - i) == abs(q[j] - k))
			return 0;

		j++;
	}

	return 1;
}

void place(int k, int n)
{
	int j;

	if (k > n)
		cnt++;
	else
	{
		for (j = 1; j <= n; j++)	//��̽��k�е�ÿһ����
		{
			if (find(k, j))
			{
				q[k] = j;
				place(k + 1, n);	 //�ݹ������ڳɹ�������ϴε������ʱ�������һ������
			}
		}
	}
}
*/