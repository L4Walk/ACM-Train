// P1888 ���Ǻ���

/*
# include <stdio.h>

void swap(unsigned long long* pa, unsigned long long* pb)
{
	unsigned long long t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	unsigned long long a, b, c, sin1, sin2;  // sin1��ʾ���ӣ�sin2��ʾ��ĸ

	scanf_s("%lld%lld%lld", &a, &b, &c);

	// �Ƚ������򣬼򻯺����ж�

	if (a >= b)
		swap(&a, &b);
	if (a >= c)
		swap(&a, &c);
	if (b >= c)
		swap(&b, &c);

	// ��ת�����Լ��

	sin1 = a;
	sin2 = c;
	
	unsigned long long r = 1;

	while (r > 0)
	{
		r = c % a;
		c = a;
		a = r;
	}

	// �������Ǻ���
	printf("%lld/%lld", sin1 / c, sin2 / c);

	return 0;
}
*/