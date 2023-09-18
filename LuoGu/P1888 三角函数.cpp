// P1888 三角函数

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
	unsigned long long a, b, c, sin1, sin2;  // sin1表示分子，sin2表示分母

	scanf_s("%lld%lld%lld", &a, &b, &c);

	// 先进行排序，简化后续判断

	if (a >= b)
		swap(&a, &b);
	if (a >= c)
		swap(&a, &c);
	if (b >= c)
		swap(&b, &c);

	// 碾转相除法约分

	sin1 = a;
	sin2 = c;
	
	unsigned long long r = 1;

	while (r > 0)
	{
		r = c % a;
		c = a;
		a = r;
	}

	// 计算三角函数
	printf("%lld/%lld", sin1 / c, sin2 / c);

	return 0;
}
*/