//14: A Simple Problem with Integers

/*
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
const int maxn = 5005;
int Fa[maxn], Rank[maxn];

void init(int n)  ///��ʼ��
{
	for (int i = 1; i <= n; i++)
	{
		Fa[i] = i;
		Rank[i] = 1;
	}
}

int find(int x) //����
{
	return x == Fa[x] ? x : (Fa[x] = find(Fa[x]));//·��ѹ��
}

void merge(int i, int j) //���Ⱥϲ�
{
	int x = find(i), y = find(j);

	if (Rank[x] <= Rank[y])
		Fa[x] = y;
	else
		Fa[y] = x;

	if (Rank[x] == Rank[y] && x != y)
		Rank[y]++;
}

int main()
{

	int n, m, T;

	cin >> T;

	while (T--)
	{
		cin >> n >> m;
		init(n);  ///��ʼ��
		int x, y;

		for (int i = 1; i <= m; i++)
		{
			cin >> x >> y;
			merge(x, y); //�ϲ�
		}

		int cnt = 0;

		for (int i = 1; i <= n; i++)
			if (Fa[i] == i)
				cnt++;

		cout << cnt << endl;
	}
	return 0;
}
*/