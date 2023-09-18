// P5717 【深基3.习8】三角形分类


/*
# include <stdio.h>

void swap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	int a, b, c;

	scanf_s("%d%d%d", &a, &b, &c);

	// 先进行排序，简化后续判断

	if (a >= b)
		swap(&a, &b);
	if (a >= c)
		swap(&a, &c);
	if (b >= c)
		swap(&b, &c);

	if ((a + b) <= c)
	printf("Not triangle\n");
	else
	{
		if ((a * a + b * b) == (c * c))
			printf("Right triangle\n");
		else if ((a * a + b * b) > (c * c))
			printf("Acute triangle\n");
		else 
			printf("Obtuse triangle\n");

		if ((a == b) || (b == c))
		{
			printf("Isosceles triangle\n");

			if (a == c)
				printf("Equilateral triangle\n");
		}
	}
}
*/