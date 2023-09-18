// P5716 【深基3.例9】月份天数

/*

# include <stdio.h>

int main()
{
	int year, month;

	scanf_s("%d%d", &year, &month);

	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		printf("31");
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		printf("30");
	else
	{
		if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0)))
			printf("29");
		else
			printf("28");
	}
		
	return 0;
}
*/