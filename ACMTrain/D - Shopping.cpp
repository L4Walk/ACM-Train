// D - Shopping

/*
# include <stdio.h>
# include <iostream>
# include <cctype>
# include <algorithm>
# include <string>
# include <vector>
# include <map>
using namespace std;

typedef pair<string, int> PAIR;

bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
	return lhs.second > rhs.second;
}


int main()
{
	freopen("test.in", "r", stdin);
	int n, m;	// n -->�̵�����m-->����
	int t_price;	// ����۸������ķ���
	int i, j, f = 0;
	int rank;
	string t_shop;	// ���������̵��� 

	map<string, int> shop_price;	// ����shop��map, <�̵������۸�>

	// �����ʼ����
	scanf("%d", &n);	// ��������

	for ( i = 0; i < n; i++)
	{
		cin >> t_shop;
		shop_price[t_shop] = 0;
	}

	// ����۸�

	scanf("%d", &m);
	rank = 1;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> t_price >> t_shop;

			shop_price[t_shop] += t_price;
		}

		vector<PAIR>name_price_vec(shop_price.begin(), shop_price.end());

		sort(name_price_vec.begin(), name_price_vec.end(), cmp_by_value);

		rank = shop_price.lower_bound(operator[shop_price["memory"]]);
	}

	return 0;
}
*/

