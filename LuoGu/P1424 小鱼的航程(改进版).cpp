// P1424 С��ĺ���(�Ľ���)

/*
# include <stdio.h>


int main()
{
	int x;
	unsigned long long n, week, remainDay;
	unsigned long long distance;

	scanf("%d%lld", &x, &n);

	if ((x == 6) || (x == 7))
	{
		week = (n - 8 + x ) / 7;
		remainDay = n - week * 7 - 8 + x;
		distance = week * 250 * 5 + remainDay * 250;

		if (remainDay > 5)
			distance -= (remainDay - 5) * 250;
	}
	else
	{
		remainDay = n - 8 + x;
		week = remainDay / 7;
		remainDay = n - week * 7 - 8 + x;
		distance = week * 250 * 5 + (6 - x) * 250 + remainDay * 250;

		if (remainDay > 5)
			distance -= (remainDay - 5) * 250;
	}

	printf("%lld", distance);

	return 0;
}
*/

/*
	��С���ε�ʱ��ֳ�3�׶�
	�׶�һ����һ��w1�����㱾��ʣ��Ҫ�ε�������������������վ���0��������6 - x�� ��һ������Ϊ8 - x���ε�����Ϊ6 - x��
	�׶ζ���������w2�������м��������ܣ��������� - ��8 - x��/  7��Ȼ��ÿ��5�죬��* 5
	�׶����������w3���������һ��ʣ��Ҫ�ε���������ʣ������ = ������ - ������ * 7 - ��һ�ܵ�����������һ�ܳ���5����Ϊ5�����򼴿�

*/

/*
int main()
{
	int x;
	long n, distance;
	long w1, w2, w3;

	scanf_s("%d%d", &x, &n);

	if ((x == 6) || (x == 7))
		w1 = 0;
	else
		w1 = 6 - x;

	if (n <= (8 - x))
	{
		w2 = 0;
		w3 = 0;
	}
	else if (n = (8 - x) +1)
	{
		w2 = 0;
		w3 = 1;
	}
	else
	{
		w2 = (n - 8 + x) / 7 * 5;
		w3 = n - 8 + x - (n - 8 + x) / 7 * 7;
	}
	
	if (w3 > 5)
		w3 = 5;
	
	distance = 250 * (w1 + w2 + w3);

	printf("%d", distance);

	return 0;

}

*/
