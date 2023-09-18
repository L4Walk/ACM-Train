// P4414 [COCI2006-2007#2] ABC

/*
# include <stdio.h>
# include <string.h>


int main()
{
	int n[3], t;
	char o[5]; 

	scanf("%d%d%d", &n[0], &n[1], &n[2]);
	scanf("%s", o);

	int i, j;

	for (i = 0; i <=1; i ++)
		for (j = 0; j <= (1 - i); j++)
		{
			if (n[j] > n[j + 1])
			{
				t = n[j];
				n[j] = n[j + 1];
				n[j + 1] = t;
			}
		}

	printf("%d %d %d", n[o[0] - 65], n[o[1] - 65], n[o[2] - 65]);

	return 0;
 }
 */