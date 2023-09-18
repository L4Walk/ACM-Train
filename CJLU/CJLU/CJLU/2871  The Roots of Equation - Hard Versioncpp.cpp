// 2871: The Roots of Equation - Hard Version

/*
# include <stdio.h>
# include <math.h>
# include <string.h>

int main()
{
	double a, b, c;
	double delta;
	double q, p;  // 实部和虚部

	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		// 判断有无实根

		delta = b * b - 4 * a * c;

		if (a == 0)	//	判断有无根
		{
			if (b == 0 && c == 0)
				printf("identical equation\n");
			else if (b == 0 && c != 0)
				printf("not a equation\n");
			else if (b != 0 && c == 0)
				printf("0.00\n");
			else if (b != 0 && c != 0)
				printf("%.2lf\n", (-c) / b);
		}
		else if (delta > 0)	//	有两个实根
		{
			printf("%.2lf %.2lf\n", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
		}
		else if (delta == 0)	//	有一个实根
		{
			if (b == 0 && c == 0)
				printf("0.00\n");
			else
				printf("%.2lf\n", (-b) / (2 * a));
		}
		else	//	有两个虚根 
		{

			p = (-b) / (2 * a);	//	求实部
			q = sqrt(-delta) / (2 * a);	//	求虚部

			printf("%.2lf+%.2lfi %.2lf-%.2lfi\n", p, q, p, q);
		}
	}

	return 0;
}
*/