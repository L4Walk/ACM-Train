// 5: ��һԪ���η��̵ĸ� - ������

/*
# include <stdio.h>
# include <math.h>
# include <string.h>

int main()
{
	double a, b, c;
	double delta;
	double q, p;  // ʵ�����鲿

	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		// �ж�����ʵ��

		delta = b * b - 4 * a * c;

		if (a == 0 )	//	�ж����޸�
		{
			if (b == 0 && c == 0)
				printf("everything is root\n");
			else if (b == 0 && c != 0)
				printf("no root\n");
			else if (b != 0 && c == 0)
				printf("0.00\n");
			else if (b != 0 && c != 0)
				printf("%.2lf\n", (-c) / b);
		}
		else if (delta > 0)	//	������ʵ��
		{
			printf("%.2lf,%.2lf\n", (-b - sqrt(b * b - 4*a*c))/ (2*a), (-b + sqrt(b * b - 4*a*c)) /(2*a));
		}
		else if (delta == 0)	//	��һ��ʵ��
		{
			if (b == 0 && c == 0)
				printf("0.00\n");
			else
				printf("%.2lf\n", (-b) / (2 * a));
		}
		else	//	��������� 
		{
			
			p = (-b) / (2 * a);	//	��ʵ��
			q = sqrt(-delta) / (2 * a);	//	���鲿
			
			printf("%.2lf-%.2lfi,%.2lf+%.2lfi\n", p, q, p, q);
		}
	}

	return 0;
}
*/
