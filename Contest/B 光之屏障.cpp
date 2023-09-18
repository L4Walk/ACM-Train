// B	π‚÷Æ∆¡’œ

/*
# include <cstdio>
# include <cmath>
# include <set>
# include <iostream>
# include <algorithm>
using namespace std;

long dic[] = { 0, 2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912 };


int main()
{
	long x, y, z;
	long i, j;
	int n;
	long temp_x, temp_y, temp_i;

	while (scanf("%d", &n) != EOF)
	{
		temp_x = temp_y = temp_i = 0;
		while (n--)
		{
			scanf("%ld%ld", &x, &y);

			if (x == temp_x && y == temp_y)
			{
				for (i = temp_i+1; i < sizeof(dic); i++)
				{
					if (dic[i] >= x && dic[i] <= y)
					{
						printf("%ld\n", dic[i]);
						break;
					}
				}

				if (i == sizeof(dic))
					printf("%ld\n", dic[temp_i]);
			}
			else
			{
				for (i = 0; i < sizeof(dic); i++)
				{
					if (dic[i] >= x && dic[i] <= y)
					{
						printf("%ld\n", dic[i]);
						break;
					}

				}

				if (i == sizeof(dic))
					printf("-1\n");
			}	
			
		

			temp_x = x;
			temp_y = y;
			temp_i = i;
		}
		
	}
	


	return 0;
}
*/

/*
# include <stdio.h>
# include <math.h>
int main()
{
	int i;
	for ( i= 1; pow(2, i) <= 1000000000; i++)
		printf("%.lf\n", pow(2, i));

	printf("%d\n", i);

	printf("%.lf", pow(2, 31));
}
*/

