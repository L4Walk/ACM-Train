// 24: How Many Prime Numbers?

/*
# include <stdio.h>
# include <iostream>
# include <vector>
# include <algorithm>
# define MAX 1111
using namespace std;


// ��ǰ��ñ�����prime
vector<int>prime;
vector<int>::iterator result;	// ���a==b�������Ƿ����prime
vector<int>::iterator l;	// lΪ��߽磬rΪ�ұ߽�
vector<int>::iterator r;
 void isPrime()
{
	bool book[MAX] = { 0 };

	for (int i = 2; i <= 1000; i++)
	{
		if (!book[i])
			prime.push_back(i);

		int len = prime.size();	//������ǰɸѡ����������

		for (int j = 0; j < len && i * prime[j] <= 1000; j++)
		{
			book[i * prime[j]] = 1;

			if (i % prime[j] == 0)
				break;
		}
	}
}


int main()
{
	int n;
	int a, b;
	int begin, end;

	isPrime();

	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d", &a, &b);

		if (a == b)
		{
			result = find(prime.begin(), prime.end(), a);
			if (result == prime.end())
				printf("0\n");
			else
				printf("1\n");
		}
		else
		{
			l = lower_bound(prime.begin(), prime.end(), a);
			r = upper_bound(prime.begin(), prime.end(), b);
			
			cout << r - l << endl;
		}
		
	}

	return 0;
}
*/
