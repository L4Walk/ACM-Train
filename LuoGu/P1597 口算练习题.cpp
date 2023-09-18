// P1597 ø⁄À„¡∑œ∞Ã‚

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cal(char s, int a, int b);

int main()
{
	int i;
	char s[20];
	char option,last_option='a';
	int num1,num2;

	scanf("%d", &i);
	while (i >= 0)
	{
		scanf("%s", &s);
		if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c')
		{
			last_option = option = s[0];
			scanf("%d%d", &num1, &num2);
		}
		else
		{
			option = last_option;
			
			num1 = atoi(s);
			scanf("%d", &num2);
		}

		cal(option, num1, num2);

		i--;
	}

	return 0;
}

void cal(char s, int a, int b) 
{
	char str[80];

	if (s == 'a')
	{
		sprintf(str, "%d+%d=%d", a, b, a + b);
		printf("%s\n%d\n", str, strlen(str));
	}

	else if (s == 'b')
	{
		sprintf(str, "%d-%d=%d", a, b, a - b);
		printf("%s\n%d\n", str, strlen(str));
	}

	else
	{
		sprintf(str, "%d*%d=%d", a, b, a * b);
		printf("%s\n%d\n", str, strlen(str));
	}
}
*/