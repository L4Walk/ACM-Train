// 3311: DATE Format

/*
# include <stdio.h>
# include <string.h>
# include <iostream>
# include <string>
using namespace std;

int isLeap(int year);

int main()
{
	string str;
	char mark;
	int month;
	int date;
	int year;
	int temp;
	int cnt = 0;
	int a[3] = { 0 };

	while (cin >> str >> mark)
	{
		temp = 0;
		cnt = 0;
		memset(a, 0, sizeof(a));

		for (int i = 0; i < str.size() + 1; i++)
		{
			if (str[i] == '/' || i == str.size())
			{
				a[cnt] = temp;
				cnt++;
				temp = 0;
			}
			else
				temp = temp * 10 + str[i] - '0';
		}

		if (mark == 'A')
		{
			month = a[0];
			date = a[1];
		}
		else
		{
			month = a[1];
			date = a[0];
		}
		year = a[2];

		if (month < 1 || month >12)
			printf("month error\n");
		else if ((date > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) || (date > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) || (date > 29 && month == 2 && isLeap(year) == 1) || (date > 28 && month == 2 && isLeap(year) == 0))
			printf("day error\n");
		else
			printf("%d-%02d-%02d\n", year, month, date);
	}

	return 0;
}

int isLeap(int year)
{
	if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0)))
		return 1;
	else
		return 0;
}
*/