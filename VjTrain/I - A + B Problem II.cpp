// I - A + B Problem II

/*
# include <stdio.h>
# include <string.h>

int main()
{
	int n;
	int i, j, x;
	int a[1000] = { 0 }, b[1000] = { 0 }, c[1000] = { 0 }, len1, len2, length_max, k;
	char s1[1000], s2[1000];

	scanf("%d", &n);

	for (x = 0; x < n; x++)
	{
		scanf("%s%s", &s1, &s2);

		len1 = strlen(s1);
		len2 = strlen(s2);

		for (j = 0; j < len1; j++) 
		{
			a[j] = s1[len1 - 1 - j] - '0';
		}

		for (j = 0; j < len2; j++) 
		{
			b[j] = s2[len2 - 1 - j] - '0';
		}
		

		if (len1 > len2)
			length_max = len1;
		else
			length_max = len2;
		k = 0;

		for (j = 0; j < length_max; j++) {
			c[j] = (a[j] + b[j] + k) % 10;
			k = (a[j] + b[j] + k) / 10;//k==1 & k==0，判断是否进位
		}


		printf("Case %d:\n", x + 1);
		printf("%s + %s = ", s1, s2);

		if (k == 1)
			printf("1");
		
		for (j = length_max - 1; j >= 0; j--)
		{
			printf("%d", &c[j]);
		}
	}

	return 0;
}
*/

/*
# include <stdio.h>

int main()
{
	double a, b;
	int n;
	int i, j, x;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%lf%lf", &a, &b);
		printf("Case %d:\n", i + 1);
		printf("%.lf + %.lf = %.lf\n\n", a, b, a + b);
	}



	return 0;
}
*/