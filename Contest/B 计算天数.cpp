// B 计算天数

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int year, month, day;
	char str[12];
	int a[6] = { 0 };
	int t = 0;
	int f = 0;
	int sum = 0;
	int i;

	scanf("%s", &str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != '/')
		{
			a[t] *= 10;
			a[t] += str[i] - '0';
		}
		else
		{
			t++;
		}
	}
	year = a[0];
	month = a[1];
	day = a[2];

	// 判断闰年
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			f = 1;
		}
	}
	else
	{
		if (year % 4 == 0)
		{
			f = 1;
		}
	}

	// 判断天数
	if (month == 1)
		sum = day;

	if (month == 2)
		sum = 31 + day;

	if (month == 3)
		sum = 59 + day;

	if (month == 4)
		sum = 90 + day;

	if (month == 5)
		sum = 120 + day;

	if (month == 6)
		sum = 151 + day;
	if (month == 7)
		sum = 181 + day;

	if (month == 8)
		sum = 212 + day;

	if (month == 9)
		sum = 243 + day;

	if (month == 10)
		sum = 273 + day;

	if (month == 11)
		sum = 304 + day;

	if (month == 12)
		sum = 334 + day;

	if (f == 1 && month > 2)
		sum += 1;

	printf("%d", sum);


}
*/