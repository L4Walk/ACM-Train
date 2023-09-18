// 27: 水公司的服务

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
using namespace std;

vector<long>customer;
vector<long>service;
int main()
{
	long n, s;
	long temp;
	long i, j;
	long sum;
	double  aver;

	while (scanf("%ld%ld", &n, &s) != EOF)
	{
		customer.clear();
		service.clear();

		for (i = 0; i < n; i++)
		{
			scanf("%ld", &temp);
			customer.push_back(temp);
		}

		sort(customer.begin(), customer.end());	// 按时间从小到大排序

		// 初始化三个窗口
		for (i = 0; i < s; i++)
		{
			service.push_back(customer[i]);
		}

		// 贪心
		sum = 0;
		j = 0;

		for (i = s; i < n; i++)
		{
			customer[i] += service[j];
			service[j] = customer[i];
			j++;
			if (j == s)
				j = 0;
		}

		for (i = 0; i < n; i++)
			sum += customer[i];

		aver =  1.0 * sum / n;

		printf("%.3lf\n", aver);
	}
	

	return 0;
}
*/