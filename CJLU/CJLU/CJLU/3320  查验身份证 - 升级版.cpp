// 3320: 查验身份证 - 升级版

/*
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int MyConvert(char s)
{
	int n;
	n = s - '0';
	return n;
}

int main()
{
	int n;
	int z;
	int i;
	char id[20];
	int f = 1;
	char m;
	char M[] = { '1', '0', 'X' ,'9', '8', '7', '6', '5','4', '3', '2' };
	while (scanf("%d", &n) != EOF && n != -1)
	{
		f = 1;
		for (i = 0; i < n; i++)
		{
			scanf("%s", &id);

			z = (MyConvert(id[0]) * 7 + MyConvert(id[1]) * 9 + MyConvert(id[2]) * 10 + MyConvert(id[3]) * 5 + MyConvert(id[4]) * 8 + MyConvert(id[5]) * 4 + MyConvert(id[6]) * 2 + MyConvert(id[7]) * 1 + MyConvert(id[8]) * 6 + MyConvert(id[9]) * 3 + MyConvert(id[10]) * 7 + MyConvert(id[11]) * 9 + MyConvert(id[12]) * 10 + MyConvert(id[13]) * 5 + MyConvert(id[14]) * 8 + MyConvert(id[15]) * 4 + MyConvert(id[16]) * 2) % 11;
			m = id[17];

			if (M[z] != m)
			{
				f = 0;
				printf("%s\n", id);
			}
		}
		
		if (f == 1)
			printf("All passed\n");

	}


	return 0;
}
*/

