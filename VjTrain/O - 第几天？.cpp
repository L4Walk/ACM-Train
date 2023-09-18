// O - 第几天？

/*
# include <stdio.h>
# include <string.h>

int main()
{
	char str[12];
	int a[3]; // a[0]代表年，a[1]代表月，a[2]代表日
	int n;
	int i, t, f;

	while (scanf("%s", &str) != EOF)
	{
		n = t = f = 0;

		for (i = 0; i < 3; i++)
		{
			a[i] = 0;
		}

		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] != '/')
				a[t] = a[t] * 10 + str[i] - '0';
			else
				t++;
		}

		// 判断闰年
		if (a[0] % 100 == 0 && a[0] % 400 == 0)
			f = 1;
		else if (a[0] % 100 != 0 && a[0] % 4 == 0)
			f = 1;

		if (a[1] == 1)
			n = a[2];
		
		if (a[1] == 2)
			n = 31 + a[2];

		if (a[1] == 3)
			n = 59 + a[2];

		if (a[1] == 4)
			n = 90 + a[2];

		if (a[1] == 5)
			n = 120 + a[2];

		if (a[1] == 6)
			n = 151 + a[2];

		if (a[1] == 7)
			n = 181 + a[2];

		if (a[1] == 8)
			n = 212 + a[2];

		if (a[1] == 9)
			n = 243 + a[2];

		if (a[1] == 10)
			n = 273 + a[2];

		if (a[1] == 11)
			n = 304 + a[2];

		if (a[1] == 12)
			n = 334 + a[2];

		if (f == 1 && a[1] > 2)
			n++;

		printf("%d\n", n);

	}

	return 0;
}
*/