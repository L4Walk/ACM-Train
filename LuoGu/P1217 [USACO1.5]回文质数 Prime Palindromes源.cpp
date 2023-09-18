/*
	˼·
	�����ɻ����������ж�������
*/

/*
# include <stdio.h>
# include <math.h>
# include <memory.h>

// �������ݳ���
int length(long long n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}

// �ð���ɸ������������
int book[100000001];
void prime(int b) {
	//��ʼ����Ĭ��ȫ����������
	memset(book, 1, sizeof(book));
	book[1] = 0;//1��������
	int n = sqrt(b);
	for (int i = 2; i <= n; i++) {
		if (book[i]) {
			//�����ı������Բ��������������������ı���ȫ����Ϊfalse
			for (int j = 2; j <= b / i; j++)
				book[i * j] = false;  // i*j<=b 
		}
	}
}

int main()
{
	long long a, b;
	long long i;

	scanf("%lld%lld", &a, &b);
	prime(b);

	for (i = length(a); i <= length(b); i++)
	{
		long long p;
		int d1, d2, d3, d4, d5;

		// ż��λ����һ��û������������11
		switch (i)
		{
		case 1:
			for (d1 = 1; d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				p = d1;//(���������...)

				if ((book[p] == 1) && (p >= a) && (p <= b))
					printf("%lld\n", p);
			}
			break;
		case 2:
			if ((a <= 11) && (b >= 11))
				printf("11\n");
			break;
		case 3:
			for (d1 = 1; d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				for (d2 = 0; d2 <= 9; d2++)
				{
					p = 100 * d1 + 10 * d2 + d1;//(���������...)

					if ((book[p] == 1) && (p >= a) && (p <= b))
						printf("%lld\n", p);
				}
			}
			break;
		case 5:
			for (d1 = (a / 10000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;

				for (d2 = ((a / 1000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 100) % 10); d3 <= 9; d3++)
					{
						p = 1e4 * d1 + 1e3 * d2 + 100 * d3 + 10 * d2 + d1;//(���������...)

						if ((book[p] == 1) && (p >= a) && (p <= b))
							printf("%lld\n", p);
					}
				}
			}
			break;
		case 7:
			for (d1 = (a / 1000000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;

				for (d2 = ((a / 100000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 10000) % 10); d3 <= 9; d3++)
					{
						for (d4 = ((a / 1000) % 10); d4 <= 9; d4++)
						{
							p = 1e6 * d1 + 1e5 * d2 + 1e4 * d3 + 1e3 * d4 + 100 * d3 + 10 * d2 + d1;//(���������...)

							if ((book[p] == 1) && (p >= a) && (p <= b))
								printf("%lld\n", p);
						}
					}
				}
			}
			break;
		default:
			for (d1 = (a / 100000000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;
				for (d2 = ((a / 10000000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 1000000) % 10); d3 <= 9; d3++)
					{
						for (d4 = ((a / 10000) % 10); d4 <= 9; d4++)
						{
							for (d5 = ((a / 1000) % 10); d5 <= 9; d5++)
							{
								p = 1e8 * d1 + 1e7 * d2 + 1e6 * d3 + 1e5 * d4 + 1e4 * d5 + 1e3 * d4 + 100 * d3 + 10 * d2 + d1;//(���������...)

								if ((book[p] == 1) && (p >= a) && (p <= b))
									printf("%lld\n", p);
							}
						}
					}
				}
			}

		}
	}

	return 0;
}

// �����ж�
 /*
int prime(long long n)
{
	long long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n))
		return 1;
	else
		return 0;
}



bool book[100000001];
 void prime(int n)
 {
	 //��ʼ����Ĭ��ȫ����������
	 memset(book, true, sizeof(book));
	 book[1] = false;  //1��������

	 for (int i = 2; i <= sqrt(n); i++)
	 {
		 if (book[i])
		 {
			 for (int j = 2; j <= n / i; j++)
				 book[i * j] = false;  // i*j<=b 
		 }
	 }
 }






int main()
{
	long long a, b;
	long long i;

	scanf("%lld%lld", &a, &b);

	for (i = length(a); i <= length(b); i++)
	{
		long long p;
		int d1, d2, d3, d4, d5;

		// ż��λ����һ��û������������11
		switch (i)
		{
		case 1:
			for (d1 = 1; d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				p = d1;//(���������...)

				if ((prime(p) == 1) && (p >= a) && (p <= b))
					printf("%lld\n", p);
			}
			break;
		case 2:
			if ((a <= 11) && (b >= 11))
				printf("11\n");
			break;
		case 3:
			for (d1 = 1; d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				for (d2 = 0; d2 <= 9; d2++)
				{
					p = 100 * d1 + 10 * d2 + d1;//(���������...)

					if ((prime(p) == 1) && (p >= a) && (p <= b))
						printf("%lld\n", p);
				}
			}
			break;
		case 5:
			for (d1 = (a / 10000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;

				for (d2 = ((a / 1000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 100) % 10); d3 <= 9; d3++)
					{
						p = 1e4 * d1 + 1e3 * d2 + 100 * d3 + 10 * d2 + d1;//(���������...)

						if ((prime(p) == 1) && (p >= a) && (p <= b))
							printf("%lld\n", p);
					}
				}
			}
			break;
		case 7:
			for (d1 = (a / 1000000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;

				for (d2 = ((a / 100000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 10000) % 10); d3 <= 9; d3++)
					{
						for (d4 = ((a / 1000) % 10); d4 <= 9; d4++)
						{
							p = 1e6 * d1 + 1e5 * d2 + 1e4 * d3 + 1e3 * d4 + 100 * d3 + 10 * d2 + d1;//(���������...)

							if ((prime(p) == 1) && (p >= a) && (p <= b))
								printf("%lld\n", p);
						}
					}
				}
			}
			break;
		default:
			for (d1 = (a / 100000000); d1 <= 9; d1 += 2)
			{    // ֻ�������Ż�������
				if (d1 % 2 == 0)
					d1++;
				for (d2 = ((a / 10000000) % 10); d2 <= 9; d2++)
				{
					for (d3 = ((a / 1000000) % 10); d3 <= 9; d3++)
					{
						for (d4 = ((a / 10000) % 10); d4 <= 9; d4++)
						{
							for (d5 = ((a / 1000) % 10); d5 <= 9; d5++)
							{
								p = 1e8 * d1 + 1e7 * d2 + 1e6 * d3 + 1e5 * d4 + 1e4 * d5 + 1e3 * d4 + 100 * d3 + 10 * d2 + d1;//(���������...)

								if ((prime(p) == 1) && (p >= a) && (p <= b))
									printf("%lld\n", p);
							}
						}
					}
				}
			}

		}
	}

	return 0;
}

  */